/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/12 03:47:49 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#define MOCK_FILE_SINGLE_LINE "mocks/full_text_line"
#define READ_STACK_SIZE 120

static void	try_read(char *file)
{
	char	destination[READ_STACK_SIZE];
	int		fd[2];

	ft_read((fd[0] = open(file, O_RDONLY)), destination, READ_STACK_SIZE);
	printf("Ft_read : %s\n", destination);
	printf("Status  : %s\n", strerror(errno));
	read((fd[1] = open(file, O_RDONLY)), destination, READ_STACK_SIZE);
	printf("Original:%s\n", destination);
	printf("Status  :%s\n\n", strerror(errno));
	close(fd[0]);
	close(fd[1]);
}

static void	try_readfd(int fd)
{
	char	destination[READ_STACK_SIZE];

	ft_read(fd, destination, READ_STACK_SIZE);
	printf("Custom ft_read: %s\n", destination);
	printf("Status        : %s\n", strerror(errno));
	printf("errno         : %d\n", errno);
	close(fd);
}

void	ft_read_test(void)
{
	try_read(MOCK_FILE_SINGLE_LINE);
	try_readfd(-1);
}
