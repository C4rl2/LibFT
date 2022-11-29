/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:30:41 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/26 15:26:13 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	new_c;

	i = 0;
	new_c = (unsigned char)c;
	while (s[i++] != '\0')
	{
		if (s[i] == new_c)
			return ((char *)s + i);
	}
	if (s[i] == new_c)
		return ((char *)s);
	return (0);
}

//int	main(void)
//{
//	char *s = strdup("");
//	int		c = '\0';
//	printf("%s\n", ft_strchr(s, c));
//}