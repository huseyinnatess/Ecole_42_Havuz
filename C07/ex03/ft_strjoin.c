/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:18:18 by huates            #+#    #+#             */
/*   Updated: 2023/07/30 20:18:19 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*new;

	i = 0;
	k = 0;
	new = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new[k++] = strs[i][j++];
		}
		j = 0;
		while (i != size - 1 && sep[j])
		{
			new[k++] = sep[j++];
		}
		i++;
	}
	new[k] = '\0';
	return (new);
}
