#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_ultimate_ft(int *********nbr);
void	ft_ft(int *i);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_swap(int *a, int *b);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int		i;
	int		*ptr;

	i = 9;
	ptr = &i;
	printf("%i\n", i);
	return (0);
}
