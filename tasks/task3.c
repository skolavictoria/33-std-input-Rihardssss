#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Error: No arguments to reverse.\n");
        return 1;
    }

    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");

    return 0;
}
