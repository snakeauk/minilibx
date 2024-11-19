/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_message.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:03:48 by ubuntu            #+#    #+#             */
/*   Updated: 2024/11/08 21:49:48 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_exit_message(int status, const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	ft_vdprintf(STDERR_FILENO, format, ap);
	va_end(ap);
	exit(status);
}
