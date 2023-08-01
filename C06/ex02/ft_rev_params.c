/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:46:30 by huates            #+#    #+#             */
/*   Updated: 2023/07/26 17:49:40 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;

	j = 0;
	argc--;
	while (argc > 0)
	{
		while (argv[argc][j])
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		j = 0;
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
