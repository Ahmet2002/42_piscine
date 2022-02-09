/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:58:05 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 21:47:44 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((int)(s1[i] - s2[i]));
}
/*
#include <stdio.h>
int	main(void){
    char	str1[10] = "abcdz";
    char	str2[10] = "abcda";

    printf("%d\n", ft_strncmp(str1, str2, 8));
    return (0);
}
*/
