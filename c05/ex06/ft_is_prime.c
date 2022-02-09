/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:59:10 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 12:34:58 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (1);
	else if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_is_prime(atoi(av[1])));
	return (0);
}
*/
