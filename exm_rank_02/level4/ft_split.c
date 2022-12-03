#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
char    **ft_split(char *str)
{
    char **tab;
    int i = 0;
    int i2 = 0;
    int i3 ;

    tab = malloc(sizeof(**tab) * 1000);
    if(!tab)
        return(NULL);
    while(str[i] == ' '||str[i] == '\n'||str[i] == '\t')
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            i3 = 0;
            tab[i2] = malloc(sizeof(char *) * 1000);
            while(str[i] > 32)
            {
                tab[i2][i3] = str[i];
                i3++;
                i++;
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
    char **word;
    int i = 0;
    if(ac == 2)
    {
        word = ft_split(av[1]);
        while(word[i])
        {
            printf("%s\n",word[i]);
            i++;
        }
    }
    write(1,"\n",1);
}
