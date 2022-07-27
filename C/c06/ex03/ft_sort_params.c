/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:32:16 by ucani             #+#    #+#             */
/*   Updated: 2022/07/15 12:32:22 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	afficher(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

void	swap(char **argv, int i, int j)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;	

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] == argv[j][k] && argv[i][k] && argv[j][k])
				k++;
			if (argv[i][k] > argv[j][k])
				swap(argv, i, j);
			j++;
		}
		i++;
	}
	afficher(argv);
	return (0);
}
