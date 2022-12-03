int		max(int* tab, unsigned int len)
{
	int i;
	int tmp;

	i = 1;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 0];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
#include<stdio.h>
int main()
{
	int arr[] ={1,6,3,4,5};
	unsigned int l = 5;
	printf("%d",max(arr,l));
}
