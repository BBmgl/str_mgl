/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:09:00 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/16 11:59:09 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 19;
	num2 = 6;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a, b);
	printf("div %d\n", *a);
	printf("mod %d\n", *b);
	return (0);
}*/
