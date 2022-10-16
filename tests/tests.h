/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/15 23:19:16 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../libasm.h"
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define NO_FUNCTION_FOUND "Function not found"
# define SUCCESS "SUCCESS"

void	ft_strcmp_test(void);
void	ft_strcpy_test(void);
void	ft_strlen_test(void);
void	ft_strdup_test(void);
void	ft_write_test(void);
void	ft_read_test(void);

void	ft_atoi_base_test(void);
void	ft_list_push_front_test(void);
void	ft_list_remove_if_test(void);
void	ft_list_size_test(void);
void	ft_list_sort_test(void);

#endif
