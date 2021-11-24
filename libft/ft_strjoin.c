/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:53:42 by enja              #+#    #+#             */
/*   Updated: 2021/11/24 13:26:48 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	zy_cpy(char *dest, const char *src)
{
	size_t	a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*predest;
	char	*finaldest;
	size_t	length;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	predest = malloc(length + 1 * sizeof(char));
	if (!predest)
		return (NULL);
	zy_cpy(predest, s1);
	finaldest = predest;
	ft_strlcpy(predest + ft_strlen(s1), s2, length + 1);
	return (finaldest);
}
