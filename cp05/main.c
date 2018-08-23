#include <stdio.h>
#include <string.h>
void			ft_putnbr(int nb);
void			*ft_strcpy(char *dest, char *src);
void			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
int				ft_strcmp(char *s1, char *s2);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


int		main(void)
{
	char	src[] = "oui";
	char	dest[] = "on va au moin jusqu a 6 caractere";
	unsigned int		h;

	h = 1;
	printf("lo_strstr: %lu\nft_strstr: %i\n",strlcat(dest, src, h) ,ft_strlcpy(dest, src, h));
	return (0);
}
