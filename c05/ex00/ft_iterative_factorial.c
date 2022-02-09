/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:23:19 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/12 21:31:48 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 0;
	while (++i <= nb)
		result *= i;
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
*/
