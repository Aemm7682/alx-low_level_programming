#include "main.h"
/**
 * _strlength - function to get the pointer length
 * @a: is pointer for the auxiliary function
 * Return: to return length
 */
int _strlength(char *a)
{
        int i = 0;

        for (; *a ; a++, i++)
                ;
        return (i);
}
