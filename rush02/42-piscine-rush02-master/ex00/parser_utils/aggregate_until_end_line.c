/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aggregate_until_end_line.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:17 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:39 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

#define AGGREGATOR_SIZE 1024

int	aggregate_until_end_line(
	char *buffer,
	char *aggregator,
	int *count,
	t_key_value_pair **dict
)
{
	while (*buffer)
	{
		if (*buffer == '\n')
		{
			aggregator[*count] = '\0';
			if (new_key_value_pair(aggregator, dict))
				return (1);
			*count = 0;
		}
		else
		{
			if (*count < AGGREGATOR_SIZE - 1)
			{
				aggregator[*count] = *buffer;
				(*count)++;
			}
			else
			{
				ft_putstr("Dict Error\n");
				return (1);
			}
		}
		buffer++;
	}
	return (0);
}
