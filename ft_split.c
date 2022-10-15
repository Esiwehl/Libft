/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 17:31:38 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/14 13:58:07 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	is_delim(char s, char c)
// {
// 	return (s == c);
// }

// static int	get_wordc(char const *s, char c)
// {
// 	int	count;
// 	int idx;

// 	idx = 0;
// 	count = 0;
// 	while (s[idx] != '\0')
// 	{
// 		while (s[idx] && is_delim(s[idx], c))
// 			idx++;
// 		if (s[idx] && !is_delim(s[idx], c))
// 		{
// 			count++;
// 			while (s[idx] && !is_delim(s[idx], c))
// 				idx++;
// 		}
// 	}
// 	return (count);
// }

// static char	*malloc_word(char const *s, char c)
// {
// 	char	*word;
// 	int		idx;

// 	idx = 0;
// 	while (s[idx] && !is_delim(s[idx], c))
// 		idx++;
// 	word = malloc(sizeof(char) * (idx + 1));
// 	if (!word)
// 		return (NULL);
// 	idx = 0;
// 	while (s[idx] && !is_delim(s[idx], c))
// 	{
// 		word[idx] = s[idx];
// 		idx++;
// 	}
// 	word[idx] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**dest;
// 	int		words;
// 	int		idx;
// 	int		x;

// 	words = get_wordc(s, c);
// 	dest = (char **)malloc(sizeof(char *) * (words + 1));
// 	if (!dest)
// 		return (NULL);
// 	idx = 0;
// 	x = 0;
// 	while (s[idx] != '\0')
// 	{
// 		while (s[idx] && is_delim(s[idx], c))
// 			s++;
// 		if (s[idx] && !is_delim(s[idx], c))
// 		{
// 			dest[x] = malloc_word(&s[idx], c);
// 			x++;
// 			while (s[idx] && !is_delim(s[idx], c))
// 				s++;
// 		}
// 	}
// 	dest[x] = NULL;
// 	return (dest);
// }

// int main()
// {
// 	char str[] = "__Deze_Zin___Moet_Worden_Gesplit";
// 	char c = '_';
// 	char **holder;

// 	holder = ft_split(str, c);
// 	for (size_t i = 0; i< 5; i++)
// 		printf("str[%lu] = %s\n", i, holder[i]);
// 	free(holder);
// }
// get no. of words
// get allocate mem for substr
// put in split arr.