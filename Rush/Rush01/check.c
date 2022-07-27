/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:59:42 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 22:59:13 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int	ft_check_column_top(int y, int tab[4][4], int rules[4][4])
{
	int	i;
	int	max;
	int	count;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[i][y] > max)
		{
			count++;
			max = tab[i][y];
		}
		i++;
	}
	if (count == rules[0][y])
		return (0);
	return (1);
}

int	ft_check_column_bottom(int y, int tab[4][4], int rules[4][4])
{
	int	i;
	int	max;
	int	count;

	count = 0;
	max = 0;
	i = 3;
	while (i >= 0)
	{
		if (tab[i][y] > max)
		{
			count++;
			max = tab[i][y];
		}
		i--;
	}
	if (count == rules[1][y])
		return (0);
	return (1);
}

int	ft_check_line_left(int x, int tab[4][4], int rules[4][4])
{
	int	i;
	int	max;
	int	count;

	count = 0;
	max = 0;
	i = 0;
	while (i < 4)
	{
		if (tab[x][i] > max)
		{
			count++;
			max = tab[x][i];
		}
		i++;
	}
	if (count == rules[2][x])
		return (0);
	return (1);
}

int	ft_check_line_right(int x, int tab[4][4], int rules[4][4])

{
	int	i;
	int	max;
	int	count;

	count = 0;
	max = 0;
	i = 3;
	while (i >= 0)
	{
		if (tab[x][i] > max)
		{
			count++;
			max = tab[x][i];
		}
		i--;
	}
	if (count == rules[3][x])
		return (0);
	return (1);
}

int	ft_check_tab(int tab[4][4], int rules[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ft_check_column_top(i, tab, rules)
			|| ft_check_column_bottom(i, tab, rules)
			|| ft_check_line_left(i, tab, rules)
			|| ft_check_line_right(i, tab, rules))
			return (1);
		i++;
	}
	return (0);
}
