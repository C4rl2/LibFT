/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:20:27 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/26 15:32:27 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <stddef.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		len_s1;
	size_t		len_s2;
	size_t		len;
	char		*new_s;

	if (s1 && s2)
	{
		i = -1;
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		len = len_s1 + len_s2;
		new_s = (char *)malloc(sizeof(char) * (len + 1));
		if (!new_s)
			return (NULL);
		while (++i < len_s1)
			new_s[i] = s1[i];
		i = 0;
		while (i < len_s2)
			new_s[len_s1++] = s2[i++];
		new_s[len_s1] = '\0';
		return (new_s);
	}
	return (NULL);
}

//int	main()
//{
//	char	*s1 = "aaa";
//	char	*s2 = "bndghcdyujsk";
//	char	*tab = ft_strjoin(s1, s2);
//	printf("%s\n", tab);
//}