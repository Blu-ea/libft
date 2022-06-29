/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:05:16 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/30 00:44:49 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	count_word(char *line, char c);
static char	**ft_split_error(char **ret, int i);
static char	*get_word(char *line, char c);

/**
 * @brief the same as a split Except it ignore the charset inside quotes.
 * 
 * @param line 
 * @param c 
 * @return Return a char** of the words(+1 for the \0) or NULL if error.
 */
char	**ft_split_quotes(char *line, char c)
{
	char	**ret;
	int		i;
	int		word;

	i = 0;
	word = count_word(line, c);
	ret = malloc((word + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret[word] = 0;
	while (i < word)
	{
		ret[i] = get_word(line, c);
		if (!ret[i])
			return (ft_split_error(ret, i));
		line = line + ft_strlen(ret[i]);
		ft_skip_quote(line);
		i++;
	}
	return (ret);
}

static char	**ft_split_error(char **ret, int i)
{
	while (i >= 0)
	{
		free(ret[i]);
		i--;
	}
	free(ret);
	return (NULL);
}

static char	*get_word(char *line, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (line[i] != c)
		i++;
	word = ft_strndup(line, i);
	return (word);
}

static int	count_word(char *line, char c)
{
	int		word;

	word = 1;
	while (line)
	{
		if (*line == c)
		{
			line = ft_skip_quote(line);
			if (line)
				word++;
		}
		if (*line == '"' || *line == '\'')
			ft_skip_quote(line);
		line++;
	}
	return (word);
}

/**
 * @brief Skip the content of a simple or double quotes.
 * 
 * @param line The pointer to the 1st simple/double quote
 * @return Return a pointer to the end of the quote or the end of the line.
 */
char	*ft_skip_quote(char *line)
{
	char	c;

	c = *line;
	line++;
	while (*line || *line != c)
	{
		line++;
	}
	return (line);
}
