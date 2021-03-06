/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 20:16:35 by maechard          #+#    #+#             */
/*   Updated: 2017/04/14 20:24:35 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_power(int pow, int n)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	return (n * ft_power(pow - 1, n));
}
