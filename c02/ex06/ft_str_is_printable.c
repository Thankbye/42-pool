/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:58:54 by ucani             #+#    #+#             */
/*   Updated: 2022/07/11 12:18:55 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	while (*str != '\0')
	{
		if ((*str >= 32) && (*str <= 126))
		{
			str++;
		}
		else
			return (0);
	}
	return (1);
}
