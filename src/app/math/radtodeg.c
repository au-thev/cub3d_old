/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radtodeg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antheven <antheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:23:19 by antheven          #+#    #+#             */
/*   Updated: 2021/04/22 22:23:58 by antheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app.h"

double	radtodeg(double radians)
{
	return (radians/M_PI*180);
}