#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[index] != '\0')
		index++;
	while (s2[j] != '\0')
		j++;

	concat = malloc(sizeof(char) * (index + j + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[index++] = s1[index];

	for (j = 0; s2[j]; j++)
		concat[j++] = s2[index];

	return (concat);
}
