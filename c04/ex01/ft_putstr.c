/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:16:12 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/12 16:16:16 by akeklik          ###   ########.fr       */
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
/*
int main(void)
{
    
    char    str[10] = "ahmettalha";

    ft_putstr(str);
    return (0);
}
*/
