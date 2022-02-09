int    check(char *str);

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    write_nbr_base(long nbr, char *base, int length)
{
    if (nbr >= length)
    {
        write_nbr_base(nbr / length, base, length);
    }
    write(1, base + (nbr % length), 1);
}

char    
