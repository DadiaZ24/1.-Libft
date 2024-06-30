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


#define COLOR_BLACK "\e[0;30m"
#define COLOR_RED "\e[0;31m"
#define COLOR_GREEN "\e[0;32m"
#define COLOR_YELLOW "\e[0;33m"
#define COLOR_BLUE "\e[0;34m"
#define COLOR_MAGENTA "\e[0;35m"
#define COLOR_CYAN "\e[0;36m"
#define COLOR_WHITE "\e[0;37m"
#define COLOR_DEFAULT "\e[0m"

#include "../libft/libft.h"
#include <string.h>
#include <limits.h>

typedef struct s_tester
{
	int	trigger_printf;
}	t_tester;

void    ft_atoi_test();
void    ft_bzero_test();
void    ft_calloc_test();
void	print_header();
void	run_tester(int user_result, int expected_result, char *test, int trigger);
#endif