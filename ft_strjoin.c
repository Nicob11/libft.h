/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <nicobasma_@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:08:01 by febasma           #+#    #+#             */
/*   Updated: 2023/09/28 19:34:10 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *dest;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	dest = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!dest)
		return (NULL);
	while (s1[k])
	{
		dest[k] = s1[k];
		k++;
	}
	k = 0;
	while (s2[k])
	{
		dest[i] = s2[k];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

int main()
{
    char    *s1 = "Hello ";
    char    *s2 = "World";
    char    *dest;

    dest = ft_strjoin(s1, s2);
    printf("%s\n", dest);
    return (0);

}