#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "12345";
    char inputPassword[100]; 

    printf("Nhap mat khau: ");
    scanf("%s", inputPassword);

    if (strcmp(inputPassword, correctPassword) == 0) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}

