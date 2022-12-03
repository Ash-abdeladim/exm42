#include<unistd.h>
#include<stdlib.h>
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

char **ft_split(char *str)
{
    int i = 0;
    int i2 = 0;
    int i3;
    while(str[i] == '\t' ||str[i] == ' ')
        i++;
    char **tab;
    tab = malloc(sizeof(char *) *1000);
    while(str[i])
    {
        if(str[i] != ' ' && str[i] != '\t')
        {
            i3 = 0;
            tab[i2] = malloc(sizeof(char) * 1000);
            while(str[i] && str[i] != ' ' && str[i] != '\t')
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
    int j = 1;
    char **word;
    if(ac > j)
    {
        word = ft_split(av[1]);
        while(word[j])
        {
            ft_putstr(word[j]);
            write(1," ",1);
            j++;
        }
        ft_putstr(word[0]);
    }
    write(1,"\n",1);
}
