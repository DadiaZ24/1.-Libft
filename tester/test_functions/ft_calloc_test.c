/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:03:30 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/06/30 15:03:30 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tester.h"

void    ft_calloc_test()
{
    printf("\n%sft_calloc: %s", COLOR_BLUE, COLOR_DEFAULT);

    // Test 1: Basic allocation test
    size_t n = 10;
    size_t size = sizeof(int);
    int *array = (int *)ft_calloc(n, size);
    size_t i = -1;
    while (++i < n)
        run_tester(array[i], 0, "Basic allocation", 0);
    run_tester(array[i - 1], 0, "Basic allocation", 1);
    free(array);

    // Test 2: Large allocation test
    n = 1000000;
    size = sizeof(int);
    array = (int *)ft_calloc(n, size);
    i = -1;
    while (++i < n)
        run_tester(array[i], 0, "Large allocation", 0);
    run_tester(array[i - 1], 0, "Large allocation", 1);
    free(array);

    // Test 2: Zero elements allocation test
    n = 0;
    size = sizeof(int);
    memset(array, 10, n);
    array = (int *)ft_calloc(n, size);
    i = -1;
    while (++i < n)
        run_tester(array[i], 0, "Zero n allocation", 0);
    run_tester(array[i - 1], 0, "Zero n allocation", 1);
    free(array);
}