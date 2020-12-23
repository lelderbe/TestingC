/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 13:51:13 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/23 13:59:55 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

union u_tag {
	int		ival;
	float	fval;
	char	*sval;
};

int		main(void)
{
	union u_tag u1;
	union u_tag u2;

	//u.ival = 2147384888;
	u1.fval = 21473.888;
	printf("ival is: %d\n", u1.ival);
	printf("fval is: %f\n", u1.fval);
	printf("sval is: %p\n", u1.sval);

	printf("u2:\n");
	u2 = u1;
	printf("ival is: %d\n", u2.ival);
	printf("fval is: %f\n", u2.fval);
	printf("sval is: %p\n", u2.sval);

}
