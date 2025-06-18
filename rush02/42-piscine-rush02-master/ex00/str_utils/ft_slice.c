/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:35:05 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:35:08 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_slice(char *str, int start, int end)
{
	int		i;
	int		len;
	int		slice_len;
	char	*result;

	if (!str || start < 0 || end < 0 || start >= end)
		return (0);
	len = ft_strlen(str);
	if (start >= len)
		return (0);
	if (end > len)
		end = len;
	slice_len = end - start;
	result = malloc(slice_len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < slice_len)
	{
		result[i] = str[start + i];
		i++;
	}
	result[slice_len] = '\0';
	return (result);
}
