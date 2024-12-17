#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Error: Please provide an operation and two numbers.\n");
        return 1;
    }

    char *operation = argv[1];
    double num1 = atof(argv[2]);
    double num2 = atof(argv[3]);
    double result;

    if (operation[0] == 'a') {  
        result = num1 + num2;
    } else if (operation[0] == 's') {  
        result = num1 - num2;
    } else if (operation[0] == 'm') {  
        result = num1 * num2;
    } else if (operation[0] == 'd') {  
        if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        result = num1 / num2;
    } else { 
        printf("Error: Unsupported operation. Use add, subtract, multiply, or divide.\n");
        return 1;
    }

    if (result == (int)result) {
        printf("Result: %d\n", (int)result);
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
