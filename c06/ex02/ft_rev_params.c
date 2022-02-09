/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:49:40 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/13 17:50:05 by akeklik          ###   ########.fr       */
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

void	ft_rev_params(char **av, int ac)
{
	int	i;

	i = ac;
	while (--i > 0)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac != 1)
		ft_rev_params(av, ac);
	return (0);
}
