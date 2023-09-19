/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:33:13 by febasma           #+#    #+#             */
/*   Updated: 2023/09/15 20:37:20 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char str[] = "Hello World";
//     char c = 'l';
//     char *p = ft_memchr(str, c, 5);
//     printf("%s", p);
//     return (0);
// }