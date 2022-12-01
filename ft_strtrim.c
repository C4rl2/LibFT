/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:38:47 by cafraixe          #+#    #+#             */
/*   Updated: 2022/12/01 21:05:36 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdlib.h>
//#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

static int	ft_char_in_array(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_char_in_array(s1[i], set))
		i++;
	while (ft_char_in_array(s1[j], set))
		j--;
	if (j + 1 <= i)
		return (ft_substr(s1, i, 0));
	return (ft_substr(s1, i, ++j - i));
}

//int	main(void)
//{
//	char	*s = strdup("abcdba");
//	char	*c = "acb";
//	printf("%s\n", ft_strtrim(s, c));
//}