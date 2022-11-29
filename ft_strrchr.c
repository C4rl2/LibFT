/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:58:32 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/26 15:25:52 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	new_c;

	i = ft_strlen(s);
	new_c = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

//int	main(void)
//{
//	char *s = strdup("kkk");
//	int		c = 'c';
//	printf("%s\n", ft_strrchr(s, c));
//}