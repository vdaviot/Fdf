/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:30:08 by vdaviot           #+#    #+#             */
/*   Updated: 2014/11/04 19:30:11 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                
#include "libft.h"

int        ft_atoi(const char *str)
{
    int    i;
    int    neg;
    int    nb;

    nb = 0;
    i = 0;
    neg = 1;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
            (str[i] == '+' && str[i + 1] != '-' && str[i + 1] != '+') ||
            str[i] == '\v' || str[i] == ' ' || str[i] == '\f')
        i++;
    if (str[i] == '-' && (ft_isdigit(str[i + 1]) == 1))
    {
        neg = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - 48);
        i++;
    }
    return (nb * neg);
}
