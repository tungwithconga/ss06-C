#include <stdio.h>

int main() {
    int number, evenNumbers = 0, oddNumbers = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenNumbers++;
        } else {
            oddNumbers++;
        }
    }

    printf("So luong so chan: %d\n", evenNumbers);
    printf("So luong so le: %d\n", oddNumbers);

    return 0;
}

