#include <unistd.h>

unsigned char print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bits;

    while (i--)
    {
        bits = (octet >> i & 1) + '0';
    }

    return (bits);
    
}


int main(void)
{
    printf("%c", print_bits(5));
}