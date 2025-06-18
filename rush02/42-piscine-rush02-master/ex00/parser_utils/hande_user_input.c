/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hande_user_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:26 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:33 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	handle_user_input(int argc, char **argv, char **input, char **dict)
{
	if (argc == 2)
	{
		*dict = "numbers.dict";
		*input = argv[1];
	}
	else if (argc == 3)
	{
		*dict = argv[1];
		*input = argv[2];
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
