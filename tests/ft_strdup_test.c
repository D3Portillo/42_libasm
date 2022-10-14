/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/13 00:34:27 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strdup_test(void)
{
	char	*result;
	char	*stacked;

	stacked = "AAAB";
	result = ft_strdup(stacked);
	printf("Pointer eq: %d\n", stacked == result);
	printf("Result + 0: %s\n", stacked);
	printf("Result + 1: %s\n", stacked + 1);
}
