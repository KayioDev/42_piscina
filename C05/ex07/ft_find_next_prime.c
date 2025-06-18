/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:44:36 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/17 21:31:47 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_find_next_prime(int nb)
{
	long	i;
	int		is_prime;

	if (nb < 2)
		nb = 2;
	while (nb <= INT_MAX)
	{
		i = 2;
		is_prime = 1;
		while (i * i <= nb)
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break ;
			}
			i++;
		}
		if (is_prime)
			return (nb);
		nb++;
	}
	return (0);
}
