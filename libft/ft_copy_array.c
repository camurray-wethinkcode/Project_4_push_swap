#include <libft.h>

void	ft_copy_array(char **arr1, char **arr2)
{
	int i;

	i = 0;
	while (arr1[++i])
		arr2[i - 1] = ft_strdup(arr1[i]);
	arr2[i - 1] = NULL;
}
