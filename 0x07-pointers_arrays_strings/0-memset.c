@@ -0,0 +1,19 @@
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to the memory area to be filled.
 * @b: the byte with which to fill s.
 * @n: number of bytes to fill.
 *
 * Return: s.
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
