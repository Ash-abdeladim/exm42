#include<unistd.h>
#include<stdio.h>

void    rstr(char *str)
{
    while(*str)
    {
        while(*str && *str == '\t' ||*str == ' ')
        {
            write(1,str,1);
            ++str;
        }
        while(*str && *str != '\t' && *str != ' ')
        {
            if(*str >= 'a' && *str <= 'z' && (*(str + 1) == '\0' ||\
                *(str + 1) == '\t' ||*(str + 1) == ' '))
                *str -= ('a' - 'A');
            else if(*str >= 'A' && *str <= 'Z' && (*(str + 1) != '\0' && \
                    *(str + 1) != ' ' && *(str + 1) != '\t'))
                *str += ('a' - 'A');
            write(1,str,1);
            ++str;
        }
    }
    write(1,"\n",1);
}

int main(int ac,char **av)
{
    if(ac == 1)
        write(1,"\n",1);
    else
    {
        int j = 1;
        while(j < ac)
        {
        rstr(av[j]);
        ++j;
        }
    }
}
