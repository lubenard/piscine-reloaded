/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubenard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 01:51:12 by lubenard          #+#    #+#             */
/*   Updated: 2018/11/06 14:36:20 by lubenard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	affichage(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	int		e;
	int		j;
	char	*swap;

	(void)argc;
	e = 1;
	while (argv[e])
	{
		j = e + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[e], argv[j]) > 0)
			{
				swap = argv[e];
				argv[e] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		e++;
	}
	affichage(argv);
	return (0);
}
