/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:30:29 by maechard          #+#    #+#             */
/*   Updated: 2017/04/13 11:26:59 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	address;

	address = 0;
	while (src[address] != '\0' && address < n)
	{
		dest[address] = src[address];
		address++;
	}
	while (address < n)
	{
		dest[address] = '\0';
		address++;
	}
	return (dest);
}
