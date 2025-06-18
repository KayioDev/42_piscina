/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:31:55 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/15 12:39:13 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_dict(char *file, t_key_value_pair	**dict)
{
	int					fd;
	int					lines_count;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict error\n");
		return (1);
	}
	lines_count = count_lines(fd);
	close(fd);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict error\n");
		return (1);
	}
	*dict = new_dict(lines_count);
	if (read_lines(*dict, fd))
		return (1);
	close(fd);
	return (0);
}
