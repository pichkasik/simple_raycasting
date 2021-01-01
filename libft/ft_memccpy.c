/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:41:29 by tilda             #+#    #+#             */
/*   Updated: 2020/11/03 18:30:54 by tilda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	c_copy;

	c_copy = c;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n != 0)
	{
		if (*s2 == c_copy)
		{
			*s1 = *s2;
			s1++;
			return (s1);
		}
		*s1 = *s2;
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return (s1);
}
