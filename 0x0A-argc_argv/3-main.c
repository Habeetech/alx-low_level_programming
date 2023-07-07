#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int prod = 0;
    int result;

    if (argc < 3)
    {
        printf("Insufficient arguments.\n");
        return 1;
    }

    result = mul(&argv[1], &prod);

    if (result != 0)
    {
        printf("Error occurred during multiplication.\n");
        return 1;
    }

    printf("Product: %d\n", prod);

    return 0;
}

