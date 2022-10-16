/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/16 04:44:13 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_list_size_test(void)
{
	t_list	*genesis;

	genesis = NULL;
	printf("SEGF: %d\n", ft_list_size(genesis));
	ft_list_push_front(&genesis, "GENESIS");
	printf("Size: %d\n", ft_list_size(genesis));
	ft_list_push_front(&genesis, "DROP");
	printf("Size: %d\n", ft_list_size(genesis));
}
