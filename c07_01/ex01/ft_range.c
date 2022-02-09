#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	len;
	if (min >= max)
		return (void *) 0;
	len = max - min;
	tab = (int *) malloc(sizeof(int) * len);
	i = -1;
    while (++i < len)
    {
		tab[i] = min;
        min++;
    }
    return (tab);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	*tab;
	int	i;
	

	if (ac == 3)
	{
		tab = ft_range(atoi(av[1]), atoi(av[2]));
		i = -1;
		while (tab[++i] != '\0')
			printf("%d\n", tab[i]);
	}
	return (0);
}
*/
