# include <unistd.h>

int main(int argc, char **argv)
{
	char ascii[255] = {0};
	int i;
	int j;

	if (argc != 3)
	{
		return (write(1, "\n", 1));
	}
	i = 1;
	while (i < 3)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ascii[(int)argv[i][j]])
			{
				ascii[(int)argv[i][j]] = 1;
				write(1, &argv[i][j], 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
