/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilinott <nilinott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:10:05 by nilinott          #+#    #+#             */
/*   Updated: 2026/03/12 13:27:32 by nilinott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;

    while (i--)
    {
        octet = (octet >> i & 1) + '0';
        write(1, &octet, 1);
    }
}

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
    print_bits(reverse_bits(2));
    printf("\n");
    print_bits(2);
    
}