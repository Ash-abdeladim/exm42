int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int l;
	char tmp;

	i = 0;
	l = ft_strlen(str) - 1;
	while (l > i)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}
#include<stdio.h>
int main()
{
	char str[10] = "hello ash";
	printf("%s",ft_strrev(str));
}
