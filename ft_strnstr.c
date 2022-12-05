/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:26:08 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/05 18:28:15 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_h;
	size_t	len_n;
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	if (len_h < len_n || len < len_n)
		return (0);
	if (len_h > len)
		size = len;
	else
		size = len_h;
	while (size-- >= len_n)
	{
		if (ft_memcmp(haystack, needle, len_n) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
