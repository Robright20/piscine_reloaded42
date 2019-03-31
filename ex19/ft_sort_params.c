/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fokrober <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 22:09:47 by fokrober          #+#    #+#             */
/*   Updated: 2019/03/31 15:10:30 by fokrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swapstr(char *a[], char *b[])
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int ac, char *av[])
{
	int i;
	int k;

	i = 0;
	k = ac;
	while (++i < k)
	{
		if (av[i + 1] && ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swapstr(&av[i], &av[i + 1]);
		}
		if (i == k - 1)
		{
			k--;
			i = 0;
		}
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}
