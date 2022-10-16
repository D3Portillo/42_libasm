/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/16 04:14:45 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <sys/types.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
ssize_t	ft_read(int fd, void *buff, size_t limit);
ssize_t	ft_write(int fd, const void *buff, size_t limit);

int		ft_atoi_base(char *str, char *base);
int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_sort(t_list **begin_list, int (*cmp)(void*, void*));
void	ft_list_remove_if(
			t_list **begin_list,
			void *data_ref,
			int (*cmp)(void*, void*),
			void (*free_fct)(void *)
			);

#endif
