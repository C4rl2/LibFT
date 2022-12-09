/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:54:48 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/08 15:31:42 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
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
