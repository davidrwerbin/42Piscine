/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:19:41 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/15 21:23:45 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && (s1[i] == s2[i]))
		i ++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char *s1 = "a";
	char *s2 = "";
	printf("%d", ft_strncmp(s1, s2, 7));
}
*/