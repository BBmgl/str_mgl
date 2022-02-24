/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:51:06 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/20 17:28:12 by bbanzar          ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	min;

	i = 0;
	while (i < size)
	{	
		min = i;
		y = i + 1;
		while (y < size)
		{
			if (tab[min] > tab[y])
				min = y;
			y++;
		}
		ft_swap(&tab[i], &tab[min]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 4, 3, 2, 1};
	int	size = 5;
	int	i = 0;
	ft_sort_int_tab (tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
