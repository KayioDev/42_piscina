/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_group.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:33:52 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:33:54 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_group(t_key_value_pair *dict, char *group, int power, int last)
{
	int	n;

	n = ft_atoi(group);
	if (n > 0)
	{
		print_small_number(dict, n, last);
		print_power_sufix(dict, power);
	}
}
