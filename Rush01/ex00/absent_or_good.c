/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   absent_or_good.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:04:00 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 22:59:41 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int	absent_on_ligne(int i, int tab[4][4], int x)
{
	int	y;

	y = 0;
	while (y < 4)
	{
		if (tab[x][y] == i)
			return (0);
		y++;
	}
	return (1);
}

int	absent_on_column(int i, int tab[4][4], int y)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (tab[x][y] == i)
			return (0);
		x++;
	}
	return (1);
}

int	ft_is_good(int tab[4][4], int pos, int rules[4][4])
{
	int	x;
	int	y;
	int	i;

	x = pos / 4;
	y = pos % 4;
	i = 1;
	if (pos == 16 && ft_check_tab(tab, rules))
		return (0);
	if (pos == 4 * 4)
		return (1);
	while (i <= 4)
	{		
		if (absent_on_ligne(i, tab, x) && absent_on_column(i, tab, y))
		{
			tab[x][y] = i;
			if (ft_is_good(tab, pos + 1, rules))
				return (1);
		}
		i++;
	}
	tab[x][y] = 0;
	return (0);
}
