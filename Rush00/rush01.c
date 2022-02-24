/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghulam- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:21:40 by nghulam-          #+#    #+#             */
/*   Updated: 2022/02/05 14:21:45 by nghulam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	test_char(int length, int height, int current_line, int current_index)
{
	if ((current_line == 1 && current_index == 1) || \
	(current_line == height && current_index == length \
	&& height != 1 && length != 1))
		ft_putchar('/');
	else if ((current_line == 1 && current_index == length) || \
	(current_line == height && current_index == 1))
		ft_putchar('\\');
	else if (current_line == 1 || current_line == height || \
	(current_line != 1 && current_line != height
			&& (current_index == 1 || current_index == length)))
		ft_putchar('*');
	else
		ft_putchar(' ');
	if (current_index == length)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	current_line;
	int	current_index;

	current_line = 1;
	current_index = 1;
	while (current_line < y + 1)
	{
		current_index = 1;
		while (current_index < x + 1)
		{
			test_char(x, y, current_line, current_index);
			current_index++;
		}
		current_line++;
	}
}
