#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);
void	ft_putnbr(int i);

int		main(int ac, char **av)
{
//	int		i;
//	int		**range;
//
//	char str[] = "2xPs              swemDopvFIP             G               MShxCmp                 SbU7AGglmHu             iFLrsW90";
//	char str[] ="         Cl3dXOm                 " ;
//	char **dest;
//	dest = ft_split_whitespaces(str);
//	ft_print_words_tables(dest);
//	i = 0;
//	range = (int **)malloc(sizeof(int*));
//	ft_ultimate_range(range, 11, 10);
//	printf("%s", ft_concat_params(ac, av));
	ft_print_words_tables(ft_split_whitespaces(ft_concat_params(ac, av)));
//	while (i < 1)
//	{
//		printf("%i, ", range[0][i]);
//		++i;
//	}
	return (0);
}
