/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_number_from_dict.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:52 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:37:10 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_max_number_from_dict(t_key_value_pair *dict)
{
	int	max_len;

	max_len = 0;
	while (dict->key)
	{
		if (ft_has_only_numbers(dict->key) && ft_strlen(dict->key) > max_len)
			max_len = ft_strlen(dict->key);
		dict++;
	}
	return (max_len);
}
