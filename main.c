#include <stdio.h>

int main() {
    int dividers[] = {3, 5, 7, 13};
    char messages[4][10] = {"Fizz", "Buzz", "Tapioca", "Kefir"};

    for (int i = 1; i <= 100; i++) {
        int dividerExist = 0;
        for (int j = 0; j < 4; j++) {
            if (i % dividers[j] == 0) {
                printf("%s", messages[j]);
                dividerExist = 1;
            }
        }
         if (dividerExist == 0) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
