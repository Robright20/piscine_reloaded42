/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:01:03 by fokrober          #+#    #+#             */
/*   Updated: 2019/04/02 03:34:02 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex27.h"

int		main(int ac, char *av[])
{
	int		fd;
	int		ret;
	char	c;

	if (ac == 1)
		ft_puterr("File name missing.\n", 20);
	else if (ac > 2)
		ft_puterr("Too many arguments.\n", 21);
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, &c, 1)))
			ft_putchar(c);
		close(fd);
	}
	return (0);
}
