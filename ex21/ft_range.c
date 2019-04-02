/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:31:01 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/02 19:06:32 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int	diff;

	diff = max - min;
	if (diff <= 0)
		return (0);
	range = (int*)malloc(diff * sizeof(*range));
	while (--diff)
		range[diff] = --max;
	range[diff] = --max;
	return (range);
}
