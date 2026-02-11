/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 10:19:26 by Bekkali           #+#    #+#             */
/*   Updated: 2026/02/11 10:19:30 by Bekkali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "../includes/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  const unsigned char *ptr;
  size_t    i;

  i = 0;
  ptr = s; // Here I need To Explained Why ? -> The Answer is Can't void Indexing Soo We Need The Other Variable for indexing :)

  while(i < n)
  {
    if(ptr[i] == (unsigned char)c)
      return ((void *)(ptr + i));
    i++;
  }
  return (NULL);
}

//int main(void)
//{
//  char str[] = "Hello World !";
//  char *result;

//  printf("=== Testing ft_memchr ===\n");

//  printf("Test 1: Find 'W' in \"%s\"\n", str);
//  result = ft_memchr(str, 'W', strlen(str));

//  if (result)
//    printf("Found: '%c' at Position %ld\n", *result, result - str);
//  else
//    printf("Not Found \n");
//  printf("Result String From Found Position: \"%s\"\n\n", result);
//}
