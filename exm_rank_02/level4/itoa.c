#include<unistd.h>
#include<stdlib.h>
int abs(int nb)
{
    if(nb < 0)
        return(-nb);
    return(nb);
}

int get_len(int nb)
{
    int len = 0;
    if(nb <= 0)
        ++len;
    while(nb != 0)
    {
        ++len;
        nb /= 10;
    }
    return(len);
}
char *ft_itoa(int nbr)
{
    int len = get_len(nbr);
    char *res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0';
    if(nbr < 0)
        res[0] = '-';
    else if(nbr == 0)
        res[0] = '0';
    while(nbr != 0)
    {
        --len;
        res[len] = abs(nbr % 10) + '0';
        nbr /= 10;
    }
    return(res);
}
#include<stdio.h>
int main()
{
    int i = -1337;
    printf("%s\n",ft_itoa(i));
}
