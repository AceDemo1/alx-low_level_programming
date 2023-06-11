/**
* _memcpy - Copies memory area
* @dest: Destination memory area
* @src: source memory area
* @n: number of bytes
* Return: Returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


