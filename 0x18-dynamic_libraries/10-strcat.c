#include "main.h"

/**
 * *_strcat - it concatenates two strings.
 * @dest: destination.
 * @src: source.
 *
 * Return: The pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];
	return (ptr);
}
