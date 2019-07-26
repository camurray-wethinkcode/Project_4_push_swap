#ifndef LIBFT_H
# define LIBFT_H
# define MIN_INT -2147483648
# define MAX_INT 2147483647
# define RESET "\033[00m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define WHITE "\033[37m"
# define RED "\033[31m"
# define CYAN "\033[36m"
# define TRUE 1
# define FALSE 0
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_gnl
{
	char			*content;
	int				fd;
	struct s_gnl	*next;
}					t_gnl;

typedef struct		s_coord
{
	int		x;
	int		y;
}					t_coord;

/*
**Part 1
*/
void				*ft_memset(void *str, int c, size_t size);
void				ft_bzero(void *s, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t size);
void				*ft_memccpy(void *dest, const void *src,
							int c, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t size);
void				*ft_memchr(const void *str, int c, size_t size);
int					ft_memcmp(const void *str, const void *str2, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t size);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
							size_t size);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t size);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
**Part 2
*/
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(int c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(int c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
**Bonus
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **link, void (*del)
							(void *, size_t));
void				ft_lstdel(t_list **link, void (*del)(void *, size_t));
void				ft_lstadd(t_list **link, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
**Extra
*/
int					ft_iswhitespace(char c);
int					ft_wordcount(char *str, char delim);
void				ft_sort_array(char **str, int len);
void				ft_strswap(char **str1, char **str2);
t_list				*ft_insert_node(t_list **head, t_list *node);
void				ft_free_list(t_list **node);
int					ft_isupper(int c);
int					ft_intlen(int n);
int					ft_frequency(char *str, char c);
void				ft_putendl_col_fd(char *colour, char *str, int fd);
void				ft_putstr_col_fd(char *colour, char *str, int fd);
void				ft_putnbr_col_fd(char *colour, int nbr, int fd);
void				ft_putchar_col_fd(char *colour, int c, int fd);
int					ft_copyuntil(char **dst, char *src, char c);
int					ft_int_overflows(const char *str);
void				ft_copy_array(char **arr1, char **arr2);
void				ft_freearray(char **arr);
int					ft_isnum(char *str);
int					string_input(char *str);

#endif
