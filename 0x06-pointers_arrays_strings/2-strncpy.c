/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (src[i] != '\0')
	{

		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[i] = '\0';
		len++;
	}
	return (dest);
}
