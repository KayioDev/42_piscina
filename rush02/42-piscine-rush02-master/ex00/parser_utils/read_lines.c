/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:33:16 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:33:25 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	read_lines(t_key_value_pair *dict, int fd)
{
	int					count;
	int					bytes_read;
	char				buffer[10 + 1];
	char				aggregator[1024];
	t_key_value_pair	*cursor;

	cursor = dict;
	count = 0;
	bytes_read = read(fd, buffer, 10);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (aggregate_until_end_line(buffer, aggregator, &count, &cursor))
			return (-1);
		bytes_read = read(fd, buffer, 10);
	}
	return (0);
}
