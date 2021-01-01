/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tilda <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:46:51 by tilda             #+#    #+#             */
/*   Updated: 2020/10/30 15:13:26 by tilda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int symbol)
{
	if (symbol >= 65 && symbol <= 90)
	{
		symbol += 32;
	}
	return (symbol);
}
