/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:19:45 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/14 13:39:09 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strcmp_test(void)
{
	char	*str1;
	char	*str2;

	str1 = "AAAAZ";
	str2 = "AAAAAAZ";
	printf("ccmp: %d\n", strcmp(str1, str2));
	printf("acmp: %d\n", ft_strcmp(str1, str2));
	str1 = "";
	printf("ccmp: %d\n", strcmp(str1, str2));
	printf("acmp: %d\n", ft_strcmp(str1, str2));
	str1 = "";
	str2 = "";
	printf("ccmp: %d\n", strcmp(str1, str2));
	printf("acmp: %d\n", ft_strcmp(str1, str2));
	str1 = "\xff\xff";
	str2 = "\xff";
	printf("ccmp: %d\n", strcmp(str1, str2));
	printf("acmp: %d\n", ft_strcmp(str1, str2));
	str1 = "";
	printf("ccmp: %d\n", strcmp(str1, ""));
	printf("acmp: %d\n", ft_strcmp(str1, ""));
	str2 = "\n\n\f\r\t";
	printf("ccmp: %d\n", strcmp(str1, str2));
	printf("acmp: %d\n", ft_strcmp(str1, str2));
}
