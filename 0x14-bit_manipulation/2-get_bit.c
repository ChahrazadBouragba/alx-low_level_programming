int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;  // invalid index

    unsigned long int mask = 1UL << index;
    return (n & mask) != 0;
}
