/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:33:11 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/12 14:51:52 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str])
	{
		len_str++;
	}
	return (len_str);
}

// int main(void)
// {
// 	char nome [] = "kaio";
// 	ft_strlen(nome);
// }