/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:03:20 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/14 20:05:35 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*Devuelve -1 si es símbolo, 0 si es número, 1 si es letra*/
int	ft_char_simb_num_alpha(char c)
{
	if (!(c >= 48 && c <= 57) && !(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z'))
		return (-1);
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*Devuelve 1 si es lowercase, o si es uppercase*/
int	ft_str_is_loweruppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (c >= 'a' && c <= 'z');
}

char	ft_strlowcase(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		c = c + ('a' - 'A');
	return (c);
}

char	ft_strupcase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		c = c - ('a' - 'A');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str[0] = ft_strupcase(str[0]);
	while (str[i])
	{
		if (ft_char_simb_num_alpha(str[i]) == 1
			&& ft_char_simb_num_alpha(str[i - 1]) == -1)
			str[i] = ft_strupcase(str[i]);
		if (!ft_str_is_loweruppercase(str[i])
			&& ft_char_simb_num_alpha(str[i - 1]) != -1)
			str[i] = ft_strlowcase(str[i]);
		i++;
	}
	return (str);
}
/*
int	main()
{
	char palabra[] = "  egfd";
	char src[] = "hola";
	printf("src: %s\n", ft_strcapitalize(palabra));
}
*/