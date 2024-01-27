/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:37:57 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/16 18:50:07 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	countdest;
	unsigned int	countsrc;
	unsigned int	i;

	i = 0;
	countdest = 0;
	countsrc = 0;
	while (src[countsrc])
		countsrc++;
	while (dest[countdest] && countdest < size)
		countdest++;
	if (countdest > size || size == 0)
		return (countdest + countsrc);
	while (src[i] && countdest + i < size - 1)
	{
		dest[countdest + i] = src[i];
		i++;
	}
	dest[countdest + countsrc] = '\0';
	return (countdest + countsrc);
}

// int main ()
// {
// 	char a[] = "aaaa";
// 	char b[] = "xyz";
// 	unsigned int  size;
// 	size = 0;
// 	//int n = ft_strlcat(a, b, size);
// 	printf("%lu", ft_strlcat(a, b, size));
// 	printf("%s", a);
// }
