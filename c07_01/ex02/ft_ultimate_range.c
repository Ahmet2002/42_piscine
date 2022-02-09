#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = ((void *)0);
		return (-1);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i + min < max)
		range[0][i] = min + i;
	return (i);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	**range;
	range = (int **) malloc(sizeof(int *) * 1);
	int	len;
	int	i;
	

	if (ac == 3)
	{
		len = ft_ultimate_range(range, atoi(av[1]), atoi(av[2]));
		i = -1;
		printf("%d\n", len);
		while (*range != ((void *)0) && ++i < len)
			printf("%d\n", range[0][i]);
	}
	return (0);
}
*/
