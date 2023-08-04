/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:39:54 by huates            #+#    #+#             */
/*   Updated: 2023/07/31 17:40:27 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = -1;
	while (str[++i])
		;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest)
	{
		i = 0;
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
	}
	else
		return (NULL);
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*argv;
	int			i;

	i = 0;
	argv = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (argv)
	{
		while (i < ac)
		{
			argv[i].size = ft_strlen(av[i]);
			argv[i].str = av[i];
			argv[i].copy = ft_strdup(av[i]);
			i++;
		}
	}
	else
		return (NULL);
	argv[i].str = 0;
	return (argv);
}
