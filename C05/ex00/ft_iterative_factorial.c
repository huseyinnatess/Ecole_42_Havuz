/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:09:32 by huates            #+#    #+#             */
/*   Updated: 2023/07/27 16:10:14 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	nb--;
	if (n == 0)
		return (1);
	else if (n < 0)
		return (0);
	while (nb > 0)
	{
		n *= nb;
		nb--;
	}
	return (n);
}
