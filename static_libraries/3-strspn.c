#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int v = 0;
	int c;

	for (i = 0; 
