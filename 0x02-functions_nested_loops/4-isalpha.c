/**
 * _isalpha - Entry point
 * 06:11am 15th Dec by Bayomsss
 * @c: argument
 * int: data type
 * Return: 0 and 1 success
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
