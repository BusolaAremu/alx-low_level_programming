#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @destt: the string @src is added to
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string @destt
 */

char *_strcat(char *destt, char *src)
{
	int len1; /* string length for src */
	int len2; /* string length for destt */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (destt[len2] != '\0')
		len2++;

	for (i = 0; i <= len1; i++)
	{
		destt[len2] = src[i];
		len2++;
	}
	return (destt);
}
