/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segmind25 <SegMind25@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:39:37 by segmind25         #+#    #+#             */
/*   Updated: 2026/09/30 12:05:31 by segmind25        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] == (unsigned char) s2[i])
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
