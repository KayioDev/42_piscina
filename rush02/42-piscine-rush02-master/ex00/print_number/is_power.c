/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:33:41 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:33:44 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_power(char *str, int power)
{
	int	count;

	if (str[0] != '1')
		return (0);
	str++;
	count = 0;
	while (*str)
	{
		if (*str != '0')
			return (0);
		count++;
		str++;
	}
	return (power == count);
}
