/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:24:40 by ucani             #+#    #+#             */
/*   Updated: 2022/07/11 11:31:05 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	while (*str != '\0')
	{
		if ((*str >= 48) && (*str <= 57))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
