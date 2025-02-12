/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: israelfe <israelfe@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:02:23 by israelfe          #+#    #+#             */
/*   Updated: 2025/01/15 00:35:00 by israelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	get_substr_len(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (0);
	if (s_len - start < len)
		return (s_len - start);
	return (len);
}

static char	*allocate_empty_substr(void)
{
	char	*substr;

	substr = (char *)malloc(1);
	if (substr)
		substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	actual_len;

	if (!s)
		return (NULL);
	actual_len = get_substr_len(s, start, len);
	if (actual_len == 0)
		return (allocate_empty_substr());
	substr = (char *)malloc(actual_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < actual_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
