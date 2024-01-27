/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:30:45 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/15 13:41:12 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *source, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (source[temp])
		temp++;
	if (size > 0)
	{
		while (i < (size - 1) && source[i])
		{
			dest[i] = source[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (temp);
}
/*
int main ()
{
	char source[] = "hola";
	char destination[] = "kkkkkk";
	ft_strlcpy(destination, source, 5);
	printf("%s", destination);
}
*/
