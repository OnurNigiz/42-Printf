/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:26:56 by onigiz            #+#    #+#             */
/*   Updated: 2023/03/27 13:26:58 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

// int main()
// {
//     char *s = "Haziran'da";
//     int x = 15;
//     int y = 23;

//     int a = ft_printf("Birsu %d %s %d yasina girecek!", x, s, y);
//     ft_printf("\n ft_printf: %d\n", a);

//     int b = printf("Birsu %d %s %d yasina girecek!", x, s, y);
//     printf("\n ft_printf: %d\n", b);

//     return 0;
// }

int sum_all(int total, ...)
{
    va_list args;
    int i = 0;
    int sum = 0;
    va_start(args, total);
    while (i < total)
    {
        sum += va_arg(args, int);
        i++;
    }
    va_end(args);
    return(sum);
    
}

int cross_all(int total, ...)
{
    va_list args;
    int i = 0;
    int cross = 1;
    va_start(args, total);
    while (i < total)
    {
        cross *= va_arg(args, int);
        i++;
    }
    va_end(args);
    return(cross);
}

int main()
{
    ft_printf("%d\n", sum_all(5, 1, 3, 6, 8, 90, 567));
    ft_printf("%d\n", cross_all(5, 1, 2, 3, 4, 5));
}