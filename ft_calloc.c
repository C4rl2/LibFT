/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:54:48 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/19 18:22:36 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count >= INT_MAX || size >= INT_MAX)
		return (NULL);
	s = malloc(count * size);
	if (s == 0)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}

/*int	main(void)
{
	char	*a;
	int		i;

	i = 0;
	a = ft_calloc(sizeof(char), 6);
	while (i < 5)
		a[i++] = 'x';
	printf("%s\n", a);
}*/
