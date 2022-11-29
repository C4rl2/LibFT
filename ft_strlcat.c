/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:38:07 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/19 17:35:23 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

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
	size_t	s_len;
	size_t	d;

	if (ft_secure(dst, src) != -1)
		return (ft_secure(dst, src));
	s_len = ft_strlen(src);
	i = ft_strlen(dst);
	d = ft_strlen(dst);
	if (dstsize == 0 || i > dstsize)
		return (s_len + dstsize);
	if (!src)
		return (0);
	else
	{
		while ((*src != '\0') && --dstsize)
			dst[i++] = *src++;
		dst[i] = '\0';
		if (d == 0)
			return (s_len);
		return (ft_strlen(dst));
	}
}

//int main(void)
//{
//    //char *str = strdup("");
//	//char *dst = (char *)calloc(sizeof(char), 1500);
//	//for (int i = 0, c = 'a'; c <= 'z'; c++, i++) {
//	//	dst[i] = c;
//	//}
//	//char *s = strdup("");
//	char *d = (char *)calloc(sizeof(char), 1500);
//	for (int i = 0, c = 'a'; c <= 'z'; c++, i++) {
//		d[i] = c;
//	}
//    //printf("%zu\n%s\n", strlcat(NULL, str, 3), (char *)NULL);
//    printf("%zu\n%s\n", ft_strlcat(NULL, NULL, 3), (char *)NULL);
//	//strlcat(dst, str, 100);
//    //printf("%s\n", dst);
//	//str = strdup("cvvvv");
//	//dst = strdup("vnnnnnnnnnn");
//	//ft_strlcat(dst, str, 100);
//    //printf("%s\n", dst);
//}
