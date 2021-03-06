/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_lettres.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:57:04 by maechard          #+#    #+#             */
/*   Updated: 2017/04/14 16:45:37 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_lettres(char *str, char c)
{
	int		nb;

	nb = 0;
	while (str[nb] != c && str[nb])
		nb++;
	return (nb);
}
