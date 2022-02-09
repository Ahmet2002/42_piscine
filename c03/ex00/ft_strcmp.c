/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:54:20 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 10:54:29 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)(s1[i] - s2[i]));
}
/*
#include <stdio.h>

int    ft_strcmp(char *str1, char *str2);

int    main(void){
    char str1[10] = "abcd";
    char str2[10] = "abcD";

    printf("%d\n", ft_strcmp(str1, str2));
    return (0);
}
*/
