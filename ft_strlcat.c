/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:38:07 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/05 18:24:50 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

static int	ft_secure(char *dst, const char *src)
{
	if (src == NULL && dst == NULL)
		return (0);
	if (src == NULL)
		return (ft_strlen(dst));
	if (dst == NULL)
		return (ft_strlen(src));
	return (-1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (ft_secure(dst, src) != -1)
		return (ft_secure(dst, src));
	i = 0;
	j = ft_strlen(dst);
	if (j > dstsize)
		return (dstsize + ft_strlen(src));
	while (j + 1 < dstsize && src[i] != 0)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return ((j - i) + ft_strlen(src));
}
