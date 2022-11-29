/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:57:51 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/15 20:10:18 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <libft.h>

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*int	main()
{
	int var = ft_isalnum(' ');
	//puts(var);
    printf("%d\n", var);
}*/