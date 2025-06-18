/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:32:00 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:16 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	print_number(t_key_value_pair *dict, char *str, int last)
{
	int	len;

	len = ft_strlen(str);
	if (ft_strcmp(str, "0") == 0)
		print_value(dict, "0", last);
	print_groups(dict, str, len);
	return (0);
}
