#include <unistd.h>

/**
 * main - Entry point
 *
 * Prints _putchar
 * Return: Always 0 (Success)
 **/
int main(void)
{
    write(1, "_putchar\n", 8);
    return (0);
}