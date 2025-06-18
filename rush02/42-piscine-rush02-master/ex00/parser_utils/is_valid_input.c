/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:30 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 19:58:21 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_valid_input(char *input)
{
	if (!ft_has_only_numbers(input))
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
