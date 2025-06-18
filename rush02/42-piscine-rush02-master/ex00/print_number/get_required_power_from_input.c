/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_required_power_from_input.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:33:35 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:33:38 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_required_power_from_input(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len <= 3)
		return (0);
	return (((len - 1) / 3) * 3);
}
