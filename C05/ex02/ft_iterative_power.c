/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:43:39 by huates            #+#    #+#             */
/*   Updated: 2023/07/26 16:44:45 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	swp;

	swp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
	{
		swp *= nb;
	}
	return (swp);
}
