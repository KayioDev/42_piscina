/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:38 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:30:42 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_dict(t_key_value_pair *dict)
{
	t_key_value_pair	*cursor;

	cursor = dict;
	while (cursor->key)
	{
		free(cursor->key);
		free(cursor->value);
		cursor++;
	}
	free(dict);
}
