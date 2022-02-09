/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:42:27 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/12 21:42:49 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (--power >= 0)
		result *= nb;
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
