/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafraixe <cafraixe@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:40:34 by cafraixe          #+#    #+#             */
/*   Updated: 2022/11/19 17:34:47 by cafraixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <libft.h>

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i = 0;
	char *str = (char *)calloc(sizeof(char), len + 1);
	unsigned int	end = start + len;	

	while(start < end)
	{
		str[i++] = s[start++];
	}
	return(str);
}*/

static unsigned int	ft_count_words(char const *s, char c)
{
	unsigned int	count;
	int				i;

	count = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
				i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static unsigned int	ft_start_word(char const *s, char c, unsigned int word)
{
	unsigned int	count;
	int				i;

	count = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
				i++;
		if (s[i] && s[i] != c)
		{
			if (count == word)
				break ;
			count++;
			while (s[i] && s[i] != c)
					i++;
		}
	}
	return (i);
}

static unsigned int	ft_len_word(char const *s, char c, unsigned int word)
{
	unsigned int	count;
	int				i;
	unsigned int	len;

	count = 0;
	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
				i++;
		if (s[i] && s[i] != c)
		{
			if (count == word)
			{
				while (s[i + len] && s[i + len] != c)
					len++;
				break ;
			}
			count++;
			while (s[i] && s[i] != c)
					i++;
		}
	}		
	return (len);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	words;
	char			**tab;
	unsigned int	i;
	unsigned int	start;
	unsigned int	len;

	words = ft_count_words(s, c);
	if (words == 0)
		return (NULL);
	i = 0;
	tab = (char **)ft_calloc(sizeof(char *), words + 1);
	if (!tab)
		return (NULL);
	while (i < words)
	{
		start = ft_start_word(s, c, i);
		len = ft_len_word(s, c, i);
		tab[i] = ft_substr(s, start, len);
		i++;
	}
	return (tab);
}

/*int	main(){
	char ** tab = ft_split("eeeeee", ' ');
	int	i = 0;
	for(;tab[i]; i++)
			puts(tab[i]);
}*/
