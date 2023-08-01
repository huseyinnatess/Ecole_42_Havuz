/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:17:38 by huates            #+#    #+#             */
/*   Updated: 2023/07/30 20:17:39 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	size = (int *)malloc(sizeof(int) * (max - min));
	if (size)
	{
		while (min < max)
		{
			size[i] = min;
			i++;
			min++;
		}
	}
	else
		return (NULL);
	return (size);
}
