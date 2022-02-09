#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int	len;
	int	i;
	
	len = ft_strlen(src);
	str = (char *) malloc(sizeof(char) * (len + 1));
	i = 0;
    while (i < len)
    {
		str[i] = src[i];
        i++;
    }
    str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[6] = "ahmet";
	printf("%s\n", ft_strdup(str));
	return (0);
}
*/
