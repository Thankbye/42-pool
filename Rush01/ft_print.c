/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:04:49 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 21:34:13 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "header.h"

void	ft_print(int tab[4][4])
{
	int	x;
	int	i;

	x = 0;
	while (x < 4)
	{
		i = 0;
		while (i < 4)
		{
			tab[x][i] += 48;
			write(1, &tab[x][i], 1);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		x++;
		write(1, "\n", 1);
	}
}
