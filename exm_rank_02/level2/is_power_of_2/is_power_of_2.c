#include<stdio.h>
int		is_power_of_2(unsigned int n)
{
	unsigned long i;

	i = 1;
	while (i < 0xffffffff)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
int main(int ac,char **av)
{
	unsigned int x = 4;
	printf("%d",is_power_of_2(x));

}
