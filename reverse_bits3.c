#include <unistd.h>

void print_bits(unsigned char octet)
{
    int r = 8;
    unsigned char byte;

    while (r--)
    {
        byte = (octet >> r & 1) + '0';
        write(1, &byte, 1);
    }
}

unsigned char	reverse_bits(unsigned char octet)
{
    int bits_len = 8;
    int r = 0;

    while (bits_len--)
    {
        r = (octet << 1 | (octet & 1));
        octet >>= 1;
    }

    return (r);
}

int main()
{
    unsigned char c = 2;
    print_bits(reverse_bits(c));
}