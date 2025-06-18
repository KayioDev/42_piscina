/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:58:01 by klima-do          #+#    #+#             */
/*   Updated: 2025/06/12 14:53:56 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	is_base_valid(char *base)
{
	int	index;
	int	index2;
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	index = 0;
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		index2 = index + 1;
		while (base[index2])
		{
			if (base[index] == base[index2])
				return (0);
			index2++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_recursive(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
	{
		ft_putnbr_recursive(nbr / base_len, base, base_len);
		ft_putnbr_recursive(nbr % base_len, base, base_len);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	long_nbr;

	if (!is_base_valid(base))
	{
		return ;
	}
	base_len = ft_strlen(base);
	long_nbr = nbr;
	if (long_nbr < 0)
	{
		ft_putchar('-');
		long_nbr = -long_nbr;
	}
	ft_putnbr_recursive(long_nbr, base, base_len);
}

// int	main(void)
// {

// 	ft_putnbr_base(42, "0123456789");
// 	printf("\n");
// 	ft_putnbr_base(-42, "0123456789");
// 	printf("\n");
// 	ft_putnbr_base(255, "0123456789ABCDEF");
// 	printf("\n");
// 	ft_putnbr_base(4, "01");
// 	printf("\n");
// 	ft_putnbr_base(100, "poneyvif");
// 	printf("\n");

// 	return (0);
// }