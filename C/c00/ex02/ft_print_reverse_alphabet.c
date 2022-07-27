/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <ucani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:54:53 by ucani             #+#    #+#             */
/*   Updated: 2022/07/07 20:43:04 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	ascii;

	ascii = 122;
	while (ascii > 96)
	{
		write(1, &ascii, 1);
		ascii--;
	}
}
