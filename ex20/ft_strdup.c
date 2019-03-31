/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:40:09 by fokrober          #+#    #+#             */
/*   Updated: 2019/03/31 15:27:16 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 1;
	while (*(++str))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dup;
	int i;

	dup = (char*)malloc(ft_strlen(src) * sizeof(*src));
	i = -1;
	while (++i <= ft_strlen(src))
		dup[i] = src[i];
	return (dup);
}
