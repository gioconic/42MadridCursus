/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:52:04 by giovanni          #+#    #+#             */
/*   Updated: 2021/11/05 22:00:31 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascii(int argument) {
	if (argument >= 0 && argument <= 43)
		return (1);
	else
		return (0);
}