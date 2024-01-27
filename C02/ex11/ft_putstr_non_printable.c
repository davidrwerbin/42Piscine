/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iratier- <iratier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:13:55 by iratier-          #+#    #+#             */
/*   Updated: 2023/11/15 13:42:09 by iratier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*ustr;

	ustr = (unsigned char *)str;
	while (*ustr)
	{
		if (*ustr < 32 || *ustr > 126)
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[*ustr / 16], 1);
			write(1, &"0123456789abcdef"[*ustr % 16], 1);
		}
		else
			write(1, ustr, 1);
		ustr++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("\nesto esta muy gu\nay € y	esto \t\vtambien");
// }
