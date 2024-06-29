/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:06:20 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/06/29 19:06:20 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

#include "../libft/libft.h"

void    ft_atoi_test(void);
void	run_tester(int user_result, int expected_result, char *test)
{
	if (user_result != expected_result)
	{
		fprintf(stderr, "Test failed!! ----> [%s]\n", test);
		fprintf(stderr, "Expected result = [%d]\n", expected_result);
		fprintf(stderr, "Your result = [%d]\n", user_result);
		exit(0);
	}
}

#endif