/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:21:29 by huates            #+#    #+#             */
/*   Updated: 2023/07/16 11:35:08 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	len;
	int	tmp;

	len = 0;
	size--;
	while (size > len)
	{
		tmp = tab[len];
		tab[len] = tab[size];
		tab[size] = tmp;
		len++;
		size--;
	}
}
