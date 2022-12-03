#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

char    **ft_split(char *str)
{
    int i = 0;
    int i2 = 0;
    int i3;
    char **tab;

    tab = malloc(sizeof(char *) * 1000);
    if(!tab)
        return(NULL);
    while(str[i])
    {
        if(str[i] > 32)
        {
            i3 = 0;
            tab[i2] = malloc(sizeof(char) * 1000);
            while(str[i] > 32)
            {
                tab[i2][i3] = str[i];
                i++;
                i3++;
            }
            tab[i2][i3] = '\0';
            i2++;
        }
        else
            i++;
    }
    tab[i2] = 0;
    return(tab);
}

int main(int ac,char **av)
{
    int i;
    i = 0;
    char **word;
    if(ac == 2)
    {
        word = ft_split(av[1]);
        while(word[i])
            i++;
        i--;
        while(i >= 0)
        {
            ft_putstr(word[i]);
            if(i > 0)
                write(1," ",1);
            i--;
        }
    }
    write(1,"\n",1);
}

