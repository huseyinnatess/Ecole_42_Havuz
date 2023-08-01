/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:59:58 by huates            #+#    #+#             */
/*   Updated: 2023/07/26 12:04:52 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_calculator(int nbr, char *base, int size)
{
	if (nbr > size - 1)
	{
		ft_calculator(nbr / size, base, size);
	}
	ft_putchar(base[nbr % size]);
}

void	sign_control(int nbr, char *base, int i)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-10000000000000000000000000000000", 33);
			return ;
		}
		ft_putchar('-');
		nbr *= -1;
	}
	ft_calculator(nbr, base, i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*control;
	int		i;

	i = 0;
	while (base[i] && base[i] != '+' && base[i] != '-')
	{
		control = &base[i];
		while (*(++control))
		{
			if (*control == base[i])
				return ;
		}
		i++;
	}
	if (i > 1 && base[i] != '+' && base[i] != '-')
	{
		sign_control(nbr, base, i);
	}
	else
		return ;
}
