/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbanzar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:21:48 by bbanzar           #+#    #+#             */
/*   Updated: 2022/02/22 09:11:47 by bbanzar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		y = 0;
		if (str[i] == to_find[y])
		{
			while (to_find[y])
			{
				if (str[i + y] != to_find[y])
					break ;
				y++;
			}
			if (to_find[y] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
