#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_join(char *str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
		{
			str[k] = strs[i][j];
			k++;
		}
		if (i == size - 1)
			continue;
		j = -1;
		while (sep[++j] != '\0')
		{
			str[k] = sep[j];
			k++;
		}
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int	total;
	int	i;
	int	len;
	
	if (size <= 0)
	{
		str = (char *) malloc(sizeof(char) * 1);
		*str = '\0';
		return (str);
	}
	total = 0;
	i = -1;
	while (++i < size)
		total += ft_strlen(strs[i]);
	len = ft_strlen(sep);
	str = (char *) malloc(sizeof(char) * ((size - 1) * len + total + 1));
	ft_join(str, strs, sep, size);
	return (str);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	str[10] = "   ";
	
	i = 3;
	if (ac != 1)
	{
		if (*ft_strjoin(i, av, str) != '\0')
		printf("%s\n", ft_strjoin(i, av, str));
	}
	return (0);
}
*/
