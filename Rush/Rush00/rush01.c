/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucani <ucani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:39:07 by ucani             #+#    #+#             */
/*   Updated: 2022/07/09 13:45:40 by ucani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_line(int x, char first, char mid, char last)
{
    ft_putchar(first);
    while (x > 0)
    {
        x--;
        if (x > 1)
        {
            ft_putchar(mid);
        }
        else if (x == 1)
        {
            ft_putchar(last);
        }
    }
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    char    firstc;
    char    basec;
    char    midc;
    char    lastc;

    firstc = '/';
    basec = '*';
    midc = ' ';
    lastc = '\\';
    if (x > 0 && y > 0)
    {
        ft_print_line(x, firstc, basec, lastc);
        while (y > 0)
        {
            y--;
            if (y > 1)
            {
                ft_print_line(x, basec, midc, basec);
            }
            else if (y == 1)
            {
                ft_print_line(x, lastc, basec, firstc);
            }
        }
    }
