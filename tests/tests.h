/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/07 21:41:38 by dcerrito         ###   ########.fr       */
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

# define NO_FUNCTION_FOUND "Function not found"
# define SUCCESS "SUCCESS"

void	ft_strcmp_test(void);
void	ft_strcpy_test(void);
void	ft_strlen_test(void);
void	ft_read_test(void);

#endif
