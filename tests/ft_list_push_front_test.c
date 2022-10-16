/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/16 04:06:47 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_list_push_front_test(void)
{
	t_list	*genesis;

	ft_list_push_front(&genesis, "DATA");
	printf("DATA == %s\n", genesis->data);
	printf("genesis->next == %p\n", genesis->next);

	free(genesis);
	ft_list_push_front(&genesis, (void *)1);
	printf("one == %p\n", genesis->data);
	printf("genesis->next == %p\n", genesis->next);
}
