/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:37:37 by ucani             #+#    #+#             */
/*   Updated: 2022/07/22 13:24:42 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += (str[i++] - 48);
		}
		else
			return (result * sign);
	}
	return (result * sign);
}

int	main (int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
