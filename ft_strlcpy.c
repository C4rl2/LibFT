/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:21:04 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/05 18:25:25 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (src == 0 || dst == 0)
		return (0);
	else
	{
		if (dstsize != 0)
		{
			dstsize--;
			while (dstsize != 0 && src[i] != 0)
			{
				dst[i] = src[i];
				i++;
				dstsize--;
			}
			dst[i] = '\0';
		}
		return (ft_strlen(src));
	}
}
