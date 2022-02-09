/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:52:29 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/15 12:59:55 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, str + i, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	num1;
	int	num2;
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	num1 = (int) s1[i];
	num2 = (int) s2[i];
	return (num1 - num2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		is_swap;

	while (1)
	{
		is_swap = 0;
		i = 0;
		while (++i + 1 < ac)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
				is_swap = 1;
			}
		}
		if (is_swap == 0)
			break ;
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 1)
		ft_sort_params(ac, av);
	return (0);
}
