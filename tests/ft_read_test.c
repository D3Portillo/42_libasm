/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/09 23:49:55 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#define FILE "mocks/full_text_line"

void	ft_read_test(void)
{
	char	*copycat;
	char	*original;
	int		fds[2];

	original = malloc(INT_MAX);
	copycat = malloc(INT_MAX);
	printf("returns: %zd\n",
		read((fds[0] = open(FILE, O_RDONLY)), original, INT_MAX));
	printf("Original:%s\n", original);
	printf("Status:%s \n\n", strerror(errno));
	printf("returns: %zd\n",
		ft_read((fds[1] = open(FILE, O_RDONLY)), copycat, INT_MAX));
	printf("Copycat :%s\n", copycat);
	printf("Status:%s \n\n", strerror(errno));
	close(fds[0]);
	close(fds[1]);
}
