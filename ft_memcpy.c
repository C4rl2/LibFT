/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:47:44 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/01 21:04:56 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

//int	main(void)
//{
//	char	d[100];
//	char	s[] = {0, 0};
//	char	*f;

//	memset(d, 'A', 100);
//	f = ft_memcpy(d, s, 2);
//	printf("%s\n", f);
//}