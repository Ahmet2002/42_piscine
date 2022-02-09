/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:42:52 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/14 21:57:38 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*occursion;

	if (to_find[0] == '\0')
		return (str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == to_find[0])
		{	
			occursion = (str + i);
			j = 0;
			while (str[i + j] && to_find[j] && to_find[j] == str[i + j])
				j++;
			if (to_find[j] == '\0')
				return (occursion);
		}
	}
	return ((void *)0);
}
/*
#include <stdio.h>
int    main(void){
    
    char    str1[10] = "1434678";
    char    str2[10] = "4678";
    char    *str3;

    str3 = ft_strstr(str1, str2);
	printf("%s\n", str3);
    return (0);
}
*/
