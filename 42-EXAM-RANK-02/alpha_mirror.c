#include <unistd.h>

int main(int argc, char *argv[])
{
	int 	i;
	char *str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <='m') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = ('a' - str[i]) + 'z';
				write(1, &str[i], 1);
			}
			else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] = 'z' - (str[i] - 'a');
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
}
