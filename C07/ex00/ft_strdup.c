/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:15:29 by huates            #+#    #+#             */
/*   Updated: 2023/07/30 20:15:53 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	while (src[++i])
		;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest)
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
		return (NULL);
	dest[i] = '\0';
	return (dest);
}
