/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:12:07 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/05/05 16:12:08 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	is_all_num(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

void	ft_exit(t_shell *data, char **args)
{
	if (data->cmd_nbr == 1)
		ft_putendl_fd(" exit", 2);
	if (!args[1])
		exit(0);
	if (args[1] && !is_all_num(args[1]))
		(ft_putendl_fd(" numeric argument required", 2),
			exit(255));
	else if (args[2])
		(ft_putendl_fd(" minishell: exit: too many arguments", 2), \
		data->status = 1);
	else
		exit(ft_atoi(args[1]) % 256);
}
