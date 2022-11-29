/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:21:04 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/29 20:02:45 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen(src) == 0 || !src)
		return (0);
	else
	{
		dst[dstsize] = '\0';
		while ((*src == '\0') && --dstsize)
			*dst++ = *src++;
		return (ft_strlen(src));
	}
}

//int main()
//{
//    char *str = strdup("xx");
//	char *dst = strdup("aa");
//    //printf("%zu\n", strlcpy(dst, str, 2));
//    //printf("%zu\n", ft_strlcpy(dst, str, 2));
//	ft_strlcpy(dst, str, 2);
//    printf("%s\n", dst);
//    return 0;
//}