/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int check(int a, int b)
{
	if (n <= 1)
		return (0);
	if (b == 1)
		return (1);
	if (n % b == 0)
		return (0);
	if (n % b != 0)
		return (check(a, b - 1);
}
/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	return (check(n, n - 1);
}
