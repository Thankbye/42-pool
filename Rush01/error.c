/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:57:53 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 23:05:07 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check2(int *i, char rules[30])
{
	while (*i < 7)
	{
		if (((rules[*i] - 48) + (rules[*i + 8] - 48) < 3)
			|| ((rules[*i] - 48) + (rules[*i + 8] - 48) > 5))
			return (1);
		*i += 2;
	}
	return (0);
}

int	ft_check_error(char rules[30], int size)
{
	int	i;

	i = 0;
	if (size != 30)
		return (1);
	if (ft_check2(&i, rules))
		return (1);
	i = 16;
	while (i < 23)
	{
		if (((rules[i] - 48) + (rules[i + 8] - 48) < 3)
			|| ((rules[i] - 48) + (rules[i + 8] - 48) > 5))
			return (1);
		i += 2;
	}
	i = 0;
	while (i < 31)
	{
		if (rules[i] < '1' && rules[i] > '4')
			return (1);
		if (rules[i + 1] != ' ' && i < 30)
			return (1);
		i += 2;
	}	
	return (0);
}
