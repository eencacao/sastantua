/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:34:14 by lutsiara          #+#    #+#             */
/*   Updated: 2026/04/02 00:34:15 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sastantua.h"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, USAGE, sizeof(USAGE) - 1);
		return (1);
	}
	sastantua((int)ato_ui(av[ac - 1]));
	return (0);
}
