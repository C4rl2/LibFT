/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:17:03 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/19 12:27:58 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
//#include <xlocale.h>

int	ft_islower(int c)
{
	return ((c >= 97) && (c <= 122));
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

//int	main(void)
//{
//	int	c;

//	c = 'z';
//	printf("%i\n", ft_toupper(c));
//}