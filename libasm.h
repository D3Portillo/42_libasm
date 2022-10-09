/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/09 23:58:51 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <limits.h>
# include <sys/types.h>

int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
ssize_t	ft_read(int fd, void *buff, size_t limit);
ssize_t	ft_write(int fd, const void *buff, size_t limit);

#endif
