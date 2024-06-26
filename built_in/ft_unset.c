/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <ooulcaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:12:28 by ooulcaid          #+#    #+#             */
/*   Updated: 2024/05/05 16:12:29 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	remove_one(t_env **env, char *var)
{
	t_env	*to_rm;
	t_env	*node;

	node = *env;
	while (node)
	{
		if (!ft_strcmp(node->name, var))
		{
			to_rm = node;
			if (node->prev)
				node->prev->next = node->next;
			else
				*env = (*env)->next;
			if (node->next)
				node->next->prev = node->prev;
			(my_free(to_rm->value), my_free(to_rm->name),
				free(to_rm), to_rm = NULL);
			break ;
		}
		node = node->next;
	}
}

void	ft_unset(t_shell *data, t_env **env, char **vars)
{
	int		i;

	i = -1;
	while (vars[++i])
		remove_one(env, vars[i]);
	data->status = 0;
	if (data->cmd_nbr > 1)
		exit(0);
}
