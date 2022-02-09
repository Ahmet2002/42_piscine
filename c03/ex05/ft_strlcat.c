/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:53:54 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 21:59:11 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (size <= i)
		return (size + ft_strlen(src));
	j = 0;
	while ((src[j] != '\0') && (i < size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen((src + j)) + ft_strlen(dest));
}
/*
#include <stdio.h>
#include <string.h>
int    main(void){
    
    char    dest[20] = "abcdefg";
    char    src[10] = "zyxvu";
    unsigned int nb = 5;
    unsigned int result;
    
    printf("------\ndest : %s\nsrc : %s\nsize : %d\n", dest, src, nb);
    //result =  strlcat(dest, src, nb);
    result = ft_strlcat(dest, src, nb);
    printf("%s\nresult : %d\n", dest, result);
    return (0);
}
*/
