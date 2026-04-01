/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lutsiara <lutsiara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:34:00 by lutsiara          #+#    #+#             */
/*   Updated: 2026/04/02 00:34:03 by lutsiara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SASTANTUA_H
# define SASTANTUA_H

# include <unistd.h>

# define USAGE "./sastantua size\n"

void				putchr(char c);
unsigned int		ato_ui(const char *a);
void				sastantua(int size);

#endif
