#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: numbers of chars to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (des[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		(dset[i] = src[j];
		i++;
		j++;
	}
	(dest[i] = '\0';

	return (dest);
}
