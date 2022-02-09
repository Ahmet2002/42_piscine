/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:49:16 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 12:43:33 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 0 || index == 1)
		return (index);
	else
		return (-1);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_fibonacci(atoi(av[1])));
	return (0);
}
*/
