/**
 * clear_bit - clears the value of bit to 0 at a given index
 * @n: pointer to the input number
 * @index: index to clear the value of (0-based index)
 * Return: 1, if it worked, or -1, if there are errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
