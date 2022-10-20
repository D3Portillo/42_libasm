/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/20 13:48:55 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#define HEX "0123456789ABCD"
#define BIN "01"
#define DEC "0123456789"
#define PER "pewrito"

void	ft_atoi_base_test(void)
{
	printf("%d\n", ft_atoi_base_c("", "01"));
	printf("%d\n", ft_atoi_base_c("7FFFFFFF", HEX));
	printf("%d\n", ft_atoi_base_c("23", DEC));
	printf("%d\n", ft_atoi_base_c("o", PER));
	printf("%d\n", ft_atoi_base_c("pewritoo", PER));
	printf("%d\n", ft_atoi_base_c("p", PER));
	printf("%d\n", ft_atoi_base_c("eeww", PER));
}
