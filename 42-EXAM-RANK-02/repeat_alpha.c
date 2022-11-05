#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	char *str;

	str = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = 0;
				while (j < str[i] - 96)
				{
					j++;
					write(1, &str[i], 1);
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = 0;
				while (j < str[i] - 64)
				{
					j++;
					write(1, &str[i], 1);
				}
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
