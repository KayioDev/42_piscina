/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:25 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:34:29 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_atoi(char *str)
{
	int	acumulator;

	acumulator = 0;
	while (*str)
	{
		acumulator = acumulator * 10 + (*str - '0');
		str++;
	}
	return (acumulator);
}
