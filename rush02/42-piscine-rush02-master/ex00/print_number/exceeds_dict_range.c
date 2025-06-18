/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceeds_dict_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:33:29 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:33:32 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	exceeds_dict_range(char *input, int max_power)
{
	int		i;
	int		len;
	char	limit[100];

	i = 1;
	while (*input == '0')
		input++;
	len = ft_strlen(input);
	if (len > max_power + 1)
		return (1);
	if (len < max_power + 1)
		return (0);
	limit[0] = '1';
	while (i <= max_power)
	{
		limit[i] = '0';
		i++;
	}
	limit[max_power + 1] = '\0';
	return (ft_strcmp(input, limit) >= 0);
}
