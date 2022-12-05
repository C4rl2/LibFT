/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:36:38 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/05 18:14:04 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_len(unsigned int nbr)
{
	int	len;

	len = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	int				sign;
	char			*str;
	unsigned int	nb;

	sign = (n < 0);
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	len = ft_len(nb);
	str = (char *)ft_calloc(sizeof(char), len + sign + 1);
	if (str == NULL)
		return (0);
	str[0] = '-';
	while (--len >= 0)
	{
		str[len + sign] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
