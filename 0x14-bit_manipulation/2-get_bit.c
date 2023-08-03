/**
 * get_bit - returns value of bit at index
 * @n: number input
 * @index: index of the bit to be retrieved (0-based index)
 * Return: -1, if the index is out of range,
 * otherwise return the value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask <<= index;
	return ((n & mask) != 0);
}
