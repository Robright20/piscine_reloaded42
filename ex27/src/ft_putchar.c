/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:14:03 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/02 00:36:08 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex27.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}