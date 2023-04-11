#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
char *result;
int lent1, lent2;

if (s1 == NULL)
{
s1 = "";
if (s2 == NULL)
{
s2 = "";
}


len1 = strlen(s1);
len2 = strlen(s2);


result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
{
return (NULL);
}


memcpy(result, s1, len1);
memcpy(result + len1, s2, len2 + 1);

return (result);
}

