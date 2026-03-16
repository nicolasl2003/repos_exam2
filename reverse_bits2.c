/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilinott <nilinott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:17:38 by nilinott          #+#    #+#             */
/*   Updated: 2026/03/12 13:22:38 by nilinott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char r = 0;
    unsigned byte_len = 8;

    while (byte_len--)
    {
        r = (r << 1) | (octet & 1);
        octet >>= 1;
    }
    return (r);
}
#include <stdio.h>
int main(void)
{
    printf("%c", reverse_bits(2));
}