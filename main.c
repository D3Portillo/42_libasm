/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/09/24 22:06:20 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int	main(void)
{
	char	*stuff;
	int		fd;

	stuff = malloc(INT32_MAX);
	fd = open("docs/x86-64-cheatsheet.pdf", O_RDONLY);
	read(fd, stuff, INT32_MAX);
	printf("%zu\n", ft_strlen("123456"));
	printf("%zu\n", ft_strlen(stuff));
	printf("%zu\n", strlen(stuff));
	return (0);
}
