#include <stdio.h>
#include <stdlib.h>

void ft_mod(int *ptr, int number);


int main(int argc, char **argv)
{
    if (argc != 3){
        printf("\n");
        return 1;
    }

    int value = atoi(argv[1]);
    int divisor = atoi(argv[2]);

    ft_mod(&value, divisor);
    printf("%d\n", value);

    return 0;
}
