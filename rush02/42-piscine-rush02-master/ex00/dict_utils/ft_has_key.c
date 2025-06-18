/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:48 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:45 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_has_key(t_key_value_pair *dict, char *key)
{
	while (dict->key)
	{
		if (ft_strcmp(key, dict->key) == 0)
			return (1);
		dict++;
	}
	return (0);
}
