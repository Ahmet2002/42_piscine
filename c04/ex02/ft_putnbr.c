/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:28:57 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/12 16:45:32 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nb)
{
	if (nb > 9)
		write_nbr(nb / 10);
	nb = (nb % 10) + 48;
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}	
	if (nb == 0)
		write(1, "0", 1);
	else
		write_nbr(nb);
}
/*
int    main(void){

    ft_putnbr(21474);
    return (0);
}
*/
