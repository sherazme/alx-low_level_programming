/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String.
 *
 * Return: Lenght of str.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
