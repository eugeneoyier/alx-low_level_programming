/**
 * _abs - gives absolute value
 * @i: Input number
 * int: Betty forced me
 *
 * Return: absolute value.
 */
int _abs(int);

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}