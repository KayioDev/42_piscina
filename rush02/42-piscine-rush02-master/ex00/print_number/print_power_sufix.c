/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_power_sufix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:07 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:02 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_power_sufix(t_key_value_pair *dict, int power)
{
	if (power > 0)
	{
		while (dict->key)
		{
			if (ft_is_power(dict->key, power))
			{
				ft_putstr(dict->value);
				ft_putstr(" ");
				return ;
			}
			dict++;
		}
	}
}
