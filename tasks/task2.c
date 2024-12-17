#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Please provide exactly two numbers.\n");
        return 1; 
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int sum = num1 + num2;

    printf("Sum: %d\n", sum);

    return 0;
}
