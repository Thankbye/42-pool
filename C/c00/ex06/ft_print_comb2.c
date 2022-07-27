/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <ucani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:56:31 by ucani             #+#    #+#             */
/*   Updated: 2022/07/08 11:22:18 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	afficher(int a, int b)
{
	int	a1;
	int	a2;
	int	b1;
	int	b2;

	a1 = a / 10 + 48;
	a2 = a % 10 + 48;
	b1 = b / 10 + 48;
	b2 = b % 10 + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				afficher(a, b);
			}
			b++;
		}
		a++;
	}	
}

int main(void)
{
	ft_print_comb2();
}
