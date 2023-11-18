/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:41:10 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/11 12:58:30 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	validate_count(int argc)
{
	if (argc == 2)
		return (1);
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (0);
}

int	validate_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	return (1);
}

void	read_file(char *file)
{
	int		fd;
	char	buf[1];

	fd = open(file, O_RDONLY);
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (validate_count(argc))
	{
		if (validate_file(argv[1]))
		{
			read_file(argv[1]);
		}
		else
			return (0);
	}
	return (0);
}
