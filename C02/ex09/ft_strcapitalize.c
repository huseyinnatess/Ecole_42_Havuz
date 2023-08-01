/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huates <huates@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:04:21 by huates            #+#    #+#             */
/*   Updated: 2023/07/17 16:23:59 by huates           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	control = 1;
	i = 0;
	while (str[i])
	{
		if (control == 1 && (str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		else if (control == 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		if (str[i] < 48 || (str [i] > 57 && str[i] < 65))
			control = 1;
		else if (str[i] > 122 || (str[i] > 90 && str[i] < 97))
			control = 1;
		else 
			control = 0;
		i++;
	}
	return (str);
}
