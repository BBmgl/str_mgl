/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:54:31 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/08 12:56:19 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	make(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a +1;
		while (b <= 8)
		{	
			c = b + 1;
			while (c <= 9)
			{
				make(a, b, c);
				if (a != 7)
				{
					write(1, ", ", 2);
				}			
				c++;
			}
			b++;
		}
		a++;
	}	
}
