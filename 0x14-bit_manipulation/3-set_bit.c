/**
 * set_bit - sets the value of bit to 1 at a given index
 * @n: pointer to the input number
 * @index: index to set the value of (0-based index)
 * Return: 1, if it worked, or -1, if there are errors
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
