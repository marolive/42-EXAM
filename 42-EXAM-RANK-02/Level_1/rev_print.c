#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*rev_print(char *str)
{
	int len;
	int j;

	j = 0;
	len = ft_strlen(str);
	while(len--)
		write(1, &str[len], 1);
	write(1, "\n", 1);
	return(str);
}

int main(void)
{
	rev_print("oicraM");
	return(0);
}
