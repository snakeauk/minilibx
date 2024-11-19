/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:19:21 by kinamura          #+#    #+#             */
/*   Updated: 2024/11/08 18:32:56 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fputx(unsigned int unum, int fd, int c)
{
	int	ret;
	int	wret;

	ret = 0;
	if (c == 'X')
		wret = ft_uitoa_base(unum, BASE_LOW_16, fd);
	else if (c == 'x')
		wret = ft_uitoa_base(unum, BASE_TOP_16, fd);
	else
		return (-1);
	if (wret < 0)
		return (-1);
	ret += wret;
	return (ret);
}
