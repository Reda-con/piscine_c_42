/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 18:42:48 by reda-con          #+#    #+#             */
/*   Updated: 2018/08/10 16:38:06 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	--hour;
	if (hour >= 25 || hour < 0)
		return ;
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN \n", 34);
	if (hour > 0 && hour < 11)
		printf("%i.00 A.M. AND %i.00 A.M\n", hour, hour + 1);
	if (hour > 12 && hour < 23)
		printf("%i.00 P.M. AND %i.00 P.M\n", hour - 12, hour + 1 - 12);
	if (hour == 24 || hour == 0)
		write(1, "12.00 A.M. AND 1.00 A.M.\n", 26);
	if (hour == 12)
		write(1, "12.00 P.M. AND 1.00 P.M.\n", 26);
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M\n");
	if (hour == 23)
		printf("11.00 P.M. AND 1.00 A.M\n");
}
