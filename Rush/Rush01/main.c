/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:38:49 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 23:22:26 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_fill_table(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	int	rules[4][4];
	int	tab[4][4];

	if (argc != 2)
		return (ft_error());
	ft_fill_table(tab);
	if (argv[1][31] != '\0')
		return (ft_error());
	if (ft_check_error(argv[1], 30))
		return (ft_error());
	ft_insert(rules, argv);
	if (ft_is_good(tab, 0, rules))
		ft_print(tab);
	else
		return (ft_error());
}
