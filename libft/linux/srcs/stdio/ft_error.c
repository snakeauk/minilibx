/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:29:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/11/08 21:49:53 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_error(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	ft_vdprintf(STDERR_FILENO, format, ap);
	va_end(ap);
	exit(EXIT_FAILURE);
}
