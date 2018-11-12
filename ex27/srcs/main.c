/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubenard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:12:55 by lubenard          #+#    #+#             */
/*   Updated: 2018/11/06 14:48:31 by lubenard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	buffer[2056];
	int		size_to_read;

	size_to_read = 1;
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		size_to_read = read(fd, buffer, 2055);
		buffer[size_to_read] = 0;
		write(1, buffer, size_to_read);
		close(fd);
	}
	return (0);
}
