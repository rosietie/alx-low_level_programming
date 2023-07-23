#include <unistd.h> // Include this header for the write() function

int _putchar(char c)
{
    return write(1, &c, 1);
}

