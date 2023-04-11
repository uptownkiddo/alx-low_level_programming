#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @src: string to be copied from
 * @dest: String to copt to
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + 1) != '\0')
	{
		*(dest + i) = *(src + 1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
