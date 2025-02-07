#include "hash_tables.h"


/**
 * shash_table_create - Creates a hash table
 *
 * @size: Size of the table
 *
 * Return: 0 (success)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}


/**
 * shash_table_set - Add an element to the table
 *
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 0 (success)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}


/**
 * shash_table_get - Gets a specific element in a table
 *
 * @ht: Hash table
 * @key: Key
 *
 * Return: 0 (success)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
	}

	return (NULL);
}


/**
 * shash_table_print - Prints the table
 *
 * @ht: Hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (tmp = ht->array[0]; tmp != NULL; tmp = tmp->next)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->next != NULL)
		{
			printf(", ");
		}
	}

	printf("}\n");
}


/**
 * shash_table_print_rev - Prints the table in reverse
 *
 * @ht: Hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (tmp = ht->array[0]; tmp != NULL; tmp = tmp->next)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->next != NULL)
		{
			printf(", ");
		}
	}

	printf("}\n");
}


/**
 * shash_table_delete - Deletes a table
 *
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *next;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}

	free(ht->array);
	free(ht);
}
