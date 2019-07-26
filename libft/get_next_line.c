#include <get_next_line.h>
#include <libft.h>

t_list	*get_file(int fd, t_list **file)
{
	t_list	*tmp;

	if (!file)
		return (NULL);
	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(file, tmp);
	return (tmp);
}

int		read_line(const int fd, char **content)
{
	int		ret;
	char	*tmp;
	char	buffer[BUFF_SIZE + 1];

	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		tmp = *content;
		if (!(*content = ft_strjoin(*content, buffer)))
			return (-1);
		free(tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	int				ret;
	static t_list	*file;
	t_list			*curr;
	char			*tmp;

	if (fd < 0 || !(line) || (read(fd, buffer, 0)) < 0 ||
	(!(curr = get_file(fd, &file))))
		return (-1);
	tmp = curr->content;
	ret = read_line(fd, &tmp);
	curr->content = tmp;
	if (ret == 0 && *tmp == '\0')
		return (0);
	ret = ft_copyuntil(line, curr->content, '\n');
	tmp = curr->content;
	if (tmp[ret] != '\0')
	{
		curr->content = ft_strdup(curr->content + ret + 1);
		free(tmp);
	}
	else
		ft_strclr(tmp);
	return (1);
}
