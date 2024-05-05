/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:12:22 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/05/05 16:12:23 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_pwd(t_shell *data)
{
	char	*position;

	position = getcwd(NULL, 0);
	ft_putendl_fd(position, 1);
	data->status = 0;
	if (position)
		free(position);
	if (data->cmd_nbr > 1)
		exit(0);
}
