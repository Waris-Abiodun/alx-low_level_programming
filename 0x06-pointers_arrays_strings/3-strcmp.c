#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		else if (s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (0);
}
