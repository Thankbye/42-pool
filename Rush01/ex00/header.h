/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaugere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:57:26 by sfaugere          #+#    #+#             */
/*   Updated: 2022/07/17 22:21:30 by sfaugere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define TOWARD_BOTTOM 0
# define TOWARD_TOP 1

void	ft_print(int tab[4][4]);

int		absent_on_ligne(int i, int tab[4][4], int x);

int		absent_on_column(int i, int tab[4][4], int x);

int		ft_is_good(int tab[4][4], int pos, int rules[4][4]);

int		ft_check_error(char rules[30], int size);

void	ft_insert(int rules[4][4], char **argv);

int		ft_check_tab(int tab[4][4], int rules [4][4]);

#endif
