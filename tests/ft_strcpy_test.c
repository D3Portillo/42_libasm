/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/14 15:46:49 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strcpy_test(void)
{
	char	*to_copy;
	char	*result;
	char	dest[255];

	to_copy = "Awdawdawdawaa    1 1 2 223 12 12 2 12 AAaaaa ____ awawd .";
	result = ft_strcpy(dest, to_copy);
	printf("copying: %s\n", to_copy);
	printf("results: %s\n", dest);
	printf("size_source: %zu\n", ft_strlen(to_copy));
	printf("size_result: %zu\n", ft_strlen(dest));
	printf("pointer equ: %d\n", dest == result);
}
