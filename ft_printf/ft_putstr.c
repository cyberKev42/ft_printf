/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrauer <kbrauer@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:46:56 by kbrauer           #+#    #+#             */
/*   Updated: 2023/09/21 18:46:59 by kbrauer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = -1;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[++i])
		write(1, &s[i], 1);
	return (i);
}
