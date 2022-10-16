/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:05:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/10/15 23:21:21 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/tests.h"

static void	runif(char *fn_name, char *fn_arg, void fn(void), char **status)
{
	if (fn_arg == NULL)
		return (fn());
	if (strcmp(fn_name, fn_arg) == 0)
		return ((*status = SUCCESS), fn());
	if (*status != SUCCESS)
		*status = NO_FUNCTION_FOUND;
}

int	main(int argc, char **argv)
{
	char	*fn_arg;
	char	*status;

	fn_arg = ((status = NULL));
	if (argc > 1)
		fn_arg = argv[1];
	runif("strcmp", fn_arg, ft_strcmp_test, &status);
	runif("strcpy", fn_arg, ft_strcpy_test, &status);
	runif("strlen", fn_arg, ft_strlen_test, &status);
	runif("strdup", fn_arg, ft_strdup_test, &status);
	runif("write", fn_arg, ft_write_test, &status);
	runif("read", fn_arg, ft_read_test, &status);
	runif("atoi_base", fn_arg, ft_atoi_base_test, &status);
	runif("list_push_front", fn_arg, ft_list_push_front_test, &status);
	runif("list_remove_if", fn_arg, ft_list_remove_if_test, &status);
	runif("list_size", fn_arg, ft_list_size_test, &status);
	runif("list_sort", fn_arg, ft_list_sort_test, &status);
	if (status != SUCCESS)
		printf("%s\n", status);
	return (0);
}
