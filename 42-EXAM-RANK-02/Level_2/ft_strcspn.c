#include <string.h>

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

size_t ft_strcspn(const char *s, const char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		while (s[i])
		{
			if (s[i] == charset[j])
				return (i);
			i++;
		}
		j++;
	}
	return (i);
}

#include <stdio.h>

int main()
{
   int len;
   int len2;

   const char str1[] = "ABCDEF4960910";
   const char str2[] = "5g";

   len = strcspn(str1, str2);
   len2 = ft_strcspn(str1, str2);
   printf("First matched character is at: %d\n", len + 1);
   printf("Primeiro caracter é : %d\n", len2 + 1);

   return(0);
}
