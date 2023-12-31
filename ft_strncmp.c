/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:40:16 by febasma           #+#    #+#             */
/*   Updated: 2023/11/07 14:05:44 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	if (str1[i] != str2[i] && i < n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
