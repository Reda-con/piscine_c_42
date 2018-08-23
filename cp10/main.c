#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));
void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int i);
int		*ft_map(int *tab, int length, int(*f)(int));
int		ft_any(char **tab, int(*f)(char*));
int		ft_count_if(char **tab, int(*f)(char*));

int		more(int i, int j)
{
	return ( j - i);
}
/*
int		is_abcde(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (str[i])
	{
		if (str[i] == c)
		{
			c++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}
*/
int		main()
{
	int		tab[7] = {1,2,3,4,3,2,1};
//	int		*ret;
//	int		i;

//	i = -1;
//	ret = ft_map(tab, 5, more);
//	while (i++ < 4)
//		printf("%i\n", ret[i]);
//	char	**oui;

//	oui[0] = "qwerty";
//	oui[1] = "azerty";
//	oui [2] = "abcde";
	if (ft_is_sort(tab, 7,more))
		printf("oui\n");

	return (0);
}
