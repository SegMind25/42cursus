/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segmind25 <SegMind25@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:10:06 by segmind25         #+#    #+#             */
/*   Updated: 2026/09/08 12:29:35 by segmind25        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	dstlen = 0;
	while(dstlen < dstsize && dst[dstlen])
		dstlen++;
	srclen = 0;
	while(src[srclen])
		srclen++;
	if(dstlen == dstsize)
		return (dstsize + srclen);
	i = 0;
	while(src[i] && dstlen + i + 1 < dstsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
