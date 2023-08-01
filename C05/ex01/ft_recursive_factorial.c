/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:56:17 by huates            #+#    #+#             */
/*   Updated: 2023/07/24 14:57:31 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
	{
		n *= ft_recursive_factorial(nb - 1);
	}
	return (n);
}
