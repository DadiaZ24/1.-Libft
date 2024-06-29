/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:22:56 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/06/29 19:22:56 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tester.h"

void    ft_atoi_test(void)
{
    run_tester(ft_atoi("123"),  atoi("123"), "123");
    run_tester(ft_atoi("-123"), atoi("-123"), "-123");
    run_tester(ft_atoi("0"), atoi("0"), "0");
    run_tester(ft_atoi("          123"), atoi("          123"), "          123");
    run_tester(ft_atoi("\t\t\t123"), atoi("\t\t\t123"), "\t\t\t123");
    run_tester(ft_atoi("123abc"), atoi("123abc"), "123abc");
    run_tester(ft_atoi("123 123"), atoi("123 123"), "123 123");
    run_tester(ft_atoi("0123"), atoi("0123"), "0123");
    run_tester(ft_atoi("  -123"), atoi("  -123"), "  -123");
    run_tester(ft_atoi("       +123"), atoi("       +123"), "       +123");
    run_tester(ft_atoi("+"), atoi("+"), "+");
    run_tester(ft_atoi("-"),  atoi("-"), "-");
    run_tester(ft_atoi(""),  atoi(""), "empty string");
    run_tester(ft_atoi("2147483648"),  atoi("2147483648"), "2147483648");
    run_tester(ft_atoi("-2147483649"),  atoi("-2147483649"), "-2147483649");
    run_tester(ft_atoi("abc"),  atoi("abc"), "abc");
    run_tester(ft_atoi("123abc456"),  atoi("123abc456"), "123abc456");
    printf("\nCongratulations! All tests have passed!\n");
}