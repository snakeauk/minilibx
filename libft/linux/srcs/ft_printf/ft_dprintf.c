/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 00:28:10 by kinamura          #+#    #+#             */
/*   Updated: 2024/09/14 11:07:55 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	ssize_t	ret;

	ret = 0;
	va_start(ap, format);
	ret = ft_vdprintf(fd, format, ap);
	va_end(ap);
	if (ret < 0)
		return (-1);
	return (ret);
}
