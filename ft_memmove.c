/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:14:03 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/17 14:19:29 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if ((d && s) == 0)
		return (0);
	if (s < d)
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
	d = (char *)dst + (len - 1);
	s = (char *)src + (len - 1);
	while (len--)
		*d-- = *s--;
	return (dst);
}

//int main()
//{
//    char *str = strdup("Hello World!");
//	char *dst = strdup("x");
//    printf("%s\n", (char *)memmove(dst, str, 5));
//    printf("%s\n", (char *)ft_memmove(dst, str, 5));
//    return 0;
//}