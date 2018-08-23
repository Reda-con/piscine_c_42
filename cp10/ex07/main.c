void	ft_print_words_tables(char **oui);
void	ft_sort_wordtab(char **non);
char	**ft_split_whitespaces(char *peut);

#include <stdio.h>

int		main(void)
{
	char	etre[] = "ceci Est 1 E35Te";
	char	**je;

	je = ft_split_whitespaces(etre);
	ft_sort_wordtab(je);
	ft_print_words_tables(je);
	return (0);
}
