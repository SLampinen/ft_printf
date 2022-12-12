/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:33:42 by slampine          #+#    #+#             */
/*   Updated: 2022/12/01 13:33:44 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *src, ...)
{
	va_list	ap;
	char	*text;
	int		val;

	val = 0;
	text = (char *)src;
	va_start(ap, src);
	while (*text != '\0')
	{
		if (*text == '%')
			val += ft_check_specifier(ap, *++text);
		else if (*text == '\\')
			val += ft_putchar_val(*text);
		else
			val += ft_putchar_val(*text);
		text++;
	}
	va_end(ap);
	return (val);
}