#include<unistd.h>

void    ft_str_cap(char *str)
{
    while(*str)
    {
        while(*str && (*str == ' '|| *str == '\t'))
        {
            write(1,str,1);
            ++str;
        }
        if( *str)
        {
            if(*str >= 'a' && *str <= 'z')
            *str -=('a' - 'A');
            write(1,str,1);
            ++str;
        }
        while(*str && *str != ' ' && *str != '\t')
        {
            if(*str >= 'A' && *str <= 'Z')
            *str +=('a' - 'A');
            write(1,str,1);
            ++str;
        }
    }
       write(1,"\n",1);
}
int main(int ac ,char **av)
{
    if(ac == 1)
        write(1,"\n",1);
    else
    {
        int j = 1;
        while(j < ac)
        {
            ft_str_cap(av[j]);
            ++j;
        }
    }
}
