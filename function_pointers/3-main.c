#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or exit with specific error codes
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    /* Check if the number of arguments is correct (Program name, num1, op, num2) */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Get the appropriate function based on the operator provided */
    operation = get_op_func(argv[2]);

    /* Check if operator is valid or if it is longer than one character */
    if (operation == NULL || argv[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    /* Check for division or modulo by zero */
    if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Execute the operation and print the result */
    result = operation(num1, num2);
    printf("%d\n", result);

    return (0);
}
