/**
 * _strlen - return the length of the string
 * @s: char type pointer
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int c;

	for(c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
