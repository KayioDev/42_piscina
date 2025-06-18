/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:08:54 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/17 21:38:25 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == 0)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
