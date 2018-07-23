/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:06:22 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 12:06:25 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprt.h"

void	ft_quit(int system, char *e_perso)
{
	if (system)
		ft_printf(RED "%s: %s\n" RESET, strerror(system), e_perso);
	else
		ft_printf(RED "%s\n" RESET, e_perso);
	exit(EXIT_FAILURE);
}
