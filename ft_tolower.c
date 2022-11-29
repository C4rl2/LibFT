/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:24:13 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/19 12:28:04 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
//#include <xlocale.h>

int	ft_isupper(int c)
{
	return ((c >= 65) && (c <= 90));
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

//int	main(void)
//{
//	int	c;

//	c = '8';
//	printf("%i\n", ft_tolower(c));
//}