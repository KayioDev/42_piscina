/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:17 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:34:20 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_value(t_key_value_pair *dict, char *key, int last)
{
	(void) last;
	while (dict->key)
	{
		if (ft_strcmp(dict->key, key) == 0)
		{
			ft_putstr(dict->value);
			ft_putstr(" ");
			return ;
		}
		dict++;
	}
}
