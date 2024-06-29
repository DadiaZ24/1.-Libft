/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:43:32 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/06/29 20:43:32 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tester.h"

void    ft_bzero_test()
{
    printf("%sft_bzero: %s", COLOR_BLUE, COLOR_DEFAULT);

    // ------------------ BUFFER TESTS --------------------
    char    small[5] = {1, 2, 3, 4, 5};
    char    medium[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char    large[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    size_t  i = -1;

    // Test 1: Small buffer
    ft_bzero(small, sizeof(small));
    while (++i < sizeof(small))
        run_tester(small[i], 0, "small buffer", 0);
    run_tester(small[i - 1], 0, "small", 1);

    // Test 2: Medium buffer
    i = -1;
    ft_bzero(medium, sizeof(medium));
    while (++i < sizeof(medium))
        run_tester(medium[i], 0, "medium buffer", 0);
    run_tester(medium[i - 1], 0, "medium buffer", 1);

    // Test 3: Medium buffer
    i = -1;
    ft_bzero(large, sizeof(large));
    while (++i < sizeof(large))
        run_tester(large[i], 0, "large buffer", 0);
    run_tester(large[i - 1], 0, "large buffer", 1);

    // ------------------ 0 LENGTH BUFFER --------------------
    char    nonlen[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    i = -1;
    ft_bzero(nonlen, 0);
    while (++i < sizeof(nonlen))
        run_tester(nonlen[i], i + 1, "non length buffer", 0);
    run_tester(nonlen[i - 1], i, "non length buffer", 1);

    // ------------------ PARTIAL BZERO --------------------
    char    partial[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    i = -1;
    ft_bzero(partial + 3, sizeof(partial + 3));
    while (++i < 3)
        run_tester(partial[i], i + 1, "partial length buffer", 0);
    i = 2;
    while (++i < sizeof(partial))
        run_tester(partial[i], 0, "partial length buffer", 0);
    run_tester(partial[i - 1], 0, "partial length buffer", 1);
    // ------------------ SUPER LARGE BZERO --------------------
    char    *slarge;

    slarge = malloc(sizeof(char) * 1000000);
    if (!slarge)
    {
        printf("\n\nmemory alocation failed on bzero super large!!!\n\n");
        return ;
    }
    memset(slarge, 'A', 1000000);
    ft_bzero(slarge, 1000000);
    i = -1;
    while (++i < sizeof(slarge))
        run_tester(slarge[i], 0, "SUPER LARGE BZERO", 0);
    run_tester(slarge[i - 1], 0, "SUPER LARGE BZERO", 1);

    // ------------------ EDGE OF MEMORY BZERO --------------------
    char    edgemem[CHAR_MAX];

    ft_bzero(edgemem, sizeof(edgemem));
    i = -1;
    while (++i < sizeof(edgemem))
        run_tester(edgemem[i], 0, "EDGE OF MEMORY BZERO", 0);
    run_tester(edgemem[i - 1], 0, "EDGE OF MEMORY BZERO", 1);
}
