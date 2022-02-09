/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:54:26 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 12:22:39 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	x = 0;
	while ((x * x <= nb))
	{
		if (x == 46341)
			break ;
		if (nb == (x * x))
			return (x);
		x++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_sqrt(atoi(av[1])));
	return (0);
}
*/
