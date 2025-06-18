/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:35:50 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:35:53 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	handle_errors_than_start(
		int error, char *input, char *dict_address, t_key_value_pair **dict);

int	main(int argc, char **argv)
{
	int					error;
	char				*input;
	char				*dict_address;
	t_key_value_pair	*dict;

	error = handle_user_input(argc, argv, &input, &dict_address);
	if (error)
		return (1);
	while (ft_is_space(*input))
		input++;
	if (*input == '+')
		input++;
	if (!ft_has_only_numbers(input))
	{
		ft_putstr("Error\n");
		return (1);
	}
	error = handle_errors_than_start(error, input, dict_address, &dict);
	if (error)
		return (1);
}

int	handle_errors_than_start(
	int error, char *input, char *dict_address, t_key_value_pair **dict)
{
	error = is_valid_input(input);
	if (error)
		return (1);
	if (parse_dict(dict_address, dict))
		return (1);
	if (!dict)
	{
		ft_putstr("Dict Error \n");
		return (1);
	}
	error = print_number(*dict, input, 0);
	free_dict(*dict);
	if (error)
		return (1);
	return (0);
}
