/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 15:54:59 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/17 18:34:50 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup_str;
	int		i;
	int		len;

	if (src == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		dup_str[i] = src[i];
		i++;
	}
	return (dup_str);
}
