/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:45:51 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/14 11:01:27 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "";
	char 	dest2[15] = "45";
	char	dest1[15] = "45";
	int n;
	n = 15;
		printf("src: %s\n", src);
	printf("dest: %s\n", dest1);
	printf("la funcion original: %s\n", strncpy(dest2, src, n));

	printf("mi funcion: %s\n", ft_strncpy(dest1, src, n));
}
*/
