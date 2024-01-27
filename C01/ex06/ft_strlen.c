/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:03:40 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/07 12:26:16 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str ++;
		count ++;
	}
	return (count);
}
/*
int	main(void)
{
	char c[5];
	char *str;

	str = "David";
	
	str = &c;
	ft_strlen(str);
}
*/
