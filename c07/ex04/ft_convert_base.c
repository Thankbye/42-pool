/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:21:13 by ucani             #+#    #+#             */
/*   Updated: 2022/07/24 13:08:41 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		get_value(char c, char *base);
int		ft_space(char c);
int		check_base(char *str);
int		ft_atoi_base(char *str, char *base);

void	ft_putnbr_base(char *result, int nbr, char *base, int *last_n)
{
	int	b;

	b = ft_strlen(base);
	if (nbr <= -2147483648)
	{
		result[0] = '-';
		(*last_n)++;
		ft_putnbr_base(result, (-(long int)nbr) / b, base, last_n);
		ft_putnbr_base(result, (-(long int)nbr) % b, base, last_n);
	}
	else if (nbr < 0)
	{
		result[0] = '-';
		(*last_n)++;
		ft_putnbr_base(result, -nbr, base, last_n);
	}
	else if (nbr < b)
	{
		result[(*last_n)++] = base[nbr];
	}
	else
	{
		ft_putnbr_base(result, nbr / b, base, last_n);
		ft_putnbr_base(result, nbr % b, base, last_n);
	}
}

int	count(int nb, char *base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb - (nb % ft_strlen(base));
		nb = nb / ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*result;
	int		last_n;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	result = malloc(sizeof(char) * (count(n, base_to) + 1));
	last_n = 0;
	ft_putnbr_base(result, n, base_to, &last_n);
	result[count(n, base_to)] = '\0';
	return (result);
}
