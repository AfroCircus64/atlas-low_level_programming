#include "hash_tables.h"

/**
 * key_index - function that get the index where key/value is stored
 * @key: key
 * @size: size
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
