/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_power_in_dict.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:56 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:37:35 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_max_power_in_dict(t_key_value_pair *dict)
{
	int	max_power;
	int	power;

	max_power = 0;
	while (dict->key)
	{
		if (ft_is_power(dict->key, ft_strlen(dict->key) - 1))
		{
			power = ft_strlen(dict->key) - 1;
			if (power > max_power)
				max_power = power;
		}
		dict++;
	}
	return (max_power);
}
