/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:01:22 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/13 12:30:58 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char src[] = "sv b dho9Tgd ";
	printf("src: %s\n", ft_strlowcase(src));
	return(0);
}
*/