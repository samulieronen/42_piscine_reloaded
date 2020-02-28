/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:28:57 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 14:13:44 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1

int		ft_writer(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		write(2, "Unable to close file/n", 21);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc == 1 || argc < 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	ft_writer(argc, argv);
	return (0);
}
