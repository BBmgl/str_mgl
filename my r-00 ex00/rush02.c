/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:16:39 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/06 17:19:02 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	mark(int ligne, int index, int x, int y)
{
	if (ligne == 1 && (index == 1 || index == x))
		ft_putchar ('A');
	else if (ligne == y && (index == 1 || index == x))
		ft_putchar ('C');
	else if ((ligne == 1 || ligne == y) || (index == 1 || index == x))
		ft_putchar ('B');
	else
		ft_putchar (' ');
	if (x == index)
		ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	ligne;
	int	index;

	ligne = 1;
	index = 1;
	while (ligne <= y)
	{
		while (index <= x)
		{	
			mark (ligne, index, x, y);
			index++;
		}
		ligne ++;
		index = 1;
	}
}
