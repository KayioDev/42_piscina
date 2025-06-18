/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:00 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:47 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_key_value_pair	*new_dict(int len)
{
	int					i;
	t_key_value_pair	*dict;

	i = 0;
	dict = malloc((len + 1) * sizeof(t_key_value_pair));
	if (!dict)
		return (0);
	while (i <= len)
		dict[i++] = (t_key_value_pair){0};
	return (dict);
}
