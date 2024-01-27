/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:58:12 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/15 19:14:49 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
int main()
{
    char dest[166] = "aaa";
	char *src = "xyz";
    ft_strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
}
*/