/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:45:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/19 14:46:43 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

#define SPACES "\t\n\v\r\f"
#define MIPLUS "-+"

static int	in_set(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static int	to_decimal(char c, char *base)
{
	int	value;

	value = 0;
	while (*base)
	{
		if (*base++ == c)
			return (value);
		++value;
	}
	return (0);
}

static int	is_invalid(char *base)
{
	char	c;

	while (*base)
	{
		c = *base++;
		if (in_set(c, SPACES) || in_set(c, MIPLUS) || in_set(c, base))
			return (1);
	}
	return (0);
}

int	ft_atoi_base_c(char *str, char *base)
{
	size_t	result;
	int		multiplier;
	int		base_size;

	multiplier = 1;
	result = 0;
	base_size = ft_strlen(base);
	if (*str == '-')
		multiplier = -1;
	if (*str == '-' || *str == '+')
		++str;
	if (base_size < 1 || is_invalid(base))
		return (0);
	while (*str)
		result = (result * base_size) + to_decimal(*str++, base);
	return (result * multiplier);
}
