/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:37:15 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/16 12:30:27 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!str[0] && !to_find[0])
		return (str);
	if (!(str[0] || to_find[0]))
		return (0);
	while (to_find[len])
		len ++;
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, len) != 0)
			i ++;
		else
			return (&str[i]);
	}
	return (0);
}

// int main()
// {
//     char encontrar[] = "";
// 	char str[] = "";
//     printf("return de mi strstr: %s\n", ft_strstr(str, encontrar));
// 	printf("return de strstr: %s\n", strstr(str, encontrar));
// 	printf("\nes%s", &""[0]);
// }
