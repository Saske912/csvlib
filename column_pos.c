/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 01:36:39 by sky               #+#    #+#             */
/*   Updated: 2020/09/13 01:29:31 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csvlib.h"

int		column_pos(int i, char *str, char simv)
{
	int		k;

	k = 0;
	if (!str || !simv)
		return (-1);
	while (str[k])
	{
		if (str[k] == simv)
			i--;
		if (!i)
			return (k);
		k++;
	}
	return (0);
}