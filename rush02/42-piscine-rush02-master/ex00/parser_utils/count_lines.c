/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:22 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:20 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	count_lines(int fd)
{
	int		lines_count;
	int		bytes_read;
	char	buffer[10];
	char	*ptr;

	ft_initialize_char(buffer, 10);
	lines_count = 0;
	bytes_read = 0;
	bytes_read = read(fd, buffer, 9);
	while (bytes_read)
	{
		buffer[bytes_read] = '\0';
		ptr = buffer;
		while (*ptr)
		{
			if (*ptr == '\n' )
				lines_count++;
			ptr++;
		}
		bytes_read = read(fd, buffer, 9);
	}
	return (lines_count);
}
