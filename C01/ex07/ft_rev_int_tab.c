/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:17:31 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/20 14:17:11 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	y = size -1;
	while (i < y)
	{
		ft_swap(&tab[i], &tab [y]);
		i++;
		y--;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
