/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:26:08 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/26 18:21:18 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

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

//int main(void)
//{
//	char	*haystack = "aabcabcd";
//	char	*needle = "aabc";
//	char	*a = ft_strnstr(haystack, needle, 7);

//	printf("%s\n", a);
//}

/*
(ft_strnstr(haystack, needle, -1) == haystack + 1)
(ft_strnstr(haystack, "a", -1) == haystack)
(ft_strnstr(haystack, "c", -1) == haystack + 4)
(ft_strnstr(haystack, "aaabc", 5) == haystack)
(ft_strnstr(haystack, "abcd", 9) == haystack + 5)
(ft_strnstr(haystack, "a", 1) == haystack)
*/