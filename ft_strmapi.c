/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:59:08 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/28 16:42:59 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

/*char ft_rot_ez(unsigned int decal, char c) {
    for (unsigned int i = 0; i < decal; i++) {
        c++;
        if (c > 'z')
            c = 'a';
    }
    return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*new_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (new_s == 0)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*int main()
{
	char	*str = strdup("ssdfsd");
	char *tt = ft_strmapi(str, &ft_rot_ez);
	puts(tt);
}*/
