char **ft_split_whitespaces(char *non);
void	ft_advanced_sort_wordtab(char **oui, int(*cmp)(char *, char *));
void	ft_print_words_tables(char **oui);

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main()
{
	char **oui;
	char non[] = "jaime BeauCuop l35 Beaucuop";

	oui = ft_split_whitespaces(non);
	ft_advanced_sort_wordtab(oui, ft_strcmp);
	ft_print_words_tables(oui);
	return (0);
}
