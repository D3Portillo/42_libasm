/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/14 16:15:28 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_write_test(void)
{
	int	file;

	file = open("mocks/yaay.ignore",
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IWUSR | S_IRUSR);
	ft_write(1, "123\n", 4);
	write(file, "yaaay :p\n", 10);
}
