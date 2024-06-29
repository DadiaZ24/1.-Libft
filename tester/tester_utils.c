/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_tester.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:58:31 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/06/29 19:58:31 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_header()
{
	printf("\n%s====================================[ 42 LIBFT TESTER ]=====================================\n\n", COLOR_BLUE);
	printf("AUTHOR: %sddias-fe\n", COLOR_DEFAULT);
	printf("%sSCHOOL: %s42 Porto\n", COLOR_BLUE, COLOR_DEFAULT);
	printf("%sPROJECT: %sLIBFT\n\n", COLOR_BLUE, COLOR_DEFAULT);
	printf("%sBE AWARE!!!!!!!! THIS TESTER DOES NOT RUN NORMINETTE, YOU SHOULD DO IT YOURSELF\n\n", COLOR_YELLOW);
	printf("%s============================================================================================%s\n\n", COLOR_BLUE, COLOR_DEFAULT);
}

void	run_tester(int user_result, int expected_result, char *test, int trigger)
{
	if (user_result == expected_result)
	{
		if (trigger)
			printf("%s[OK] %s", COLOR_GREEN, COLOR_DEFAULT);
	}
	else
	{
		printf("%s[KO] %s\n", COLOR_RED, COLOR_DEFAULT);
		printf("%sTest failed!! ----> %s[%s]\n", COLOR_RED, COLOR_DEFAULT, test);
		printf("Expected result --> [%d]\n", expected_result);
		printf("Your result ------> [%d]\n", user_result);
		exit(0);
	}
}
