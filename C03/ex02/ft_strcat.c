/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:03:59 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/21 14:28:48 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	y = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + y] = src[i];
		i++;
	}
	dest[y + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[14] = "tengerleg";
	char	src[] = "gaza";

	printf ("%s\n", ft_strcat(dest, src));
	return (0);
}*/
