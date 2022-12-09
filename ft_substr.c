/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:33:00 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/08 15:31:42 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	char			*str;
	size_t			end;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (len < ft_strlen(s))
		str = (char *)ft_calloc(sizeof(char), len + 1);
	else
		str = (char *)ft_calloc(sizeof(char), ft_strlen(s + start) + 1);
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
		return (str);
	end = start + len;
	while (start < end && s[start])
		str[i++] = s[start++];
	return (str);
}
