#include "main.h"

/**
 * _islower - Entry point
 * Description: check if a character is lower
 * @c: the integer value it recieves
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == 1)
{
return (1);
}
}
return (0);
}
