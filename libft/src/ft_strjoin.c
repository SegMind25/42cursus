/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 08:58:13 by Bekkali           #+#    #+#             */
/*   Updated: 2026/03/03 09:06:32 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  size_t i;
  size_t j;

  if(!s1 || !s2)
    return (NULL);
  str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
  if(!str)
    return (NULL);
  i = 0;
  j = 0;
  while (s1[i])
  {
    str[i] = s1[i];
    i++;
  }
  while(s2[j])
  {
    str[i] = s2[j];
    i++;
    j++;
  }
  str[i] = '\0';
  return (str);
}
