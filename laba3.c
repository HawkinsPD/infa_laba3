#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int arraySize = atoi(argv[1]);
    float array[arraySize];
    int result = 0;

    if (arraySize < 1 || (argc - 3 != atoi(argv[1]))) {
        printf("%s\n", "array size not specified / array size != values given");
    } else {
        for (int index = 0, start = 3; start <= arraySize + 2; start++, index++) {
            array[index] = atoi(argv[start]);
            if (array[index] == atoi(argv[2])) {
                result = index + 1;
            }
        }
        if (result != 0) {
            printf("%s %d","value index:", result);
        } else {
            printf("%s","value not found in array");
        }
    }
    return 0;
}