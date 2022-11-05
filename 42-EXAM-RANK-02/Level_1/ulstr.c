#include <unistd.h>

int main(int argc, char *argv[])
{
	int 	i;
	char *str;

	str = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				write(1, &str[i], 1);
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
				write(1, &str[i], 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
