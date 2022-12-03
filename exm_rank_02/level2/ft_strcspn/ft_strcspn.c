
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;
	while (s[i] != '\0')
	{
		i2 = 0;
		while (reject[i2] != '\0')
		{
			if (s[i] == reject[i2])
				return (i);
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
#include<stdio.h>

int	main(int ac,char **av)
{
	char str[] = "hello1";
	char keys[] = "0123456789";
	int position;
	position = ft_strcspn(str,keys);
	printf("the first number in str is at position %d\n",position + 1);
	return(0);
}
