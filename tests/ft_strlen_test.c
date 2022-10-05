/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/05 13:25:45 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strlen_test(void)
{
	char	*stuff;
	int		fd;

	stuff = malloc(INT_MAX);
	fd = open("docs/x86-64-cheatsheet.pdf", O_RDONLY);
	read(fd, stuff, INT_MAX);
	printf("%zu\n", ft_strlen("123456"));
	printf("%zu\n", ft_strlen(stuff));
	printf("%zu\n", strlen(stuff));
}
