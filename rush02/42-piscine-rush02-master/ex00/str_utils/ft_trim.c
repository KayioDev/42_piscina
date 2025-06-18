/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:35:35 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:35:37 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_trim(char *str)
{
	char	*start;
	char	*end;
	char	*dest;

	start = str;
	while (ft_is_space(*start))
		start++;
	if (*start == '\0')
	{
		*str = '\0';
		return ;
	}
	end = start;
	while (*end)
		end++;
	end--;
	while (ft_is_space(*end))
		end--;
	dest = str;
	while (start <= end)
		*dest++ = *start++;
	*dest = '\0';
}
