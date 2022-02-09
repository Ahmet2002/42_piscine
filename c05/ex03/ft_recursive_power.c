/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:48:42 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/12 21:48:48 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
