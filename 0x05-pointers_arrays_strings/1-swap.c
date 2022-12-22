/**
 * swap_int - pointer prom swapping pointer int values
 * @a: pointer int value
 * @b: point int value
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}	
