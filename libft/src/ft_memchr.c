/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segmind25 <SegMind25@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:06:22 by segmind25         #+#    #+#             */
/*   Updated: 2026/09/30 12:48:57 by segmind25        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	us;
	size_t			i;
	unsigned char	uc;

	str = (const char *) s;
	uc = (const char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (NULL);
}
