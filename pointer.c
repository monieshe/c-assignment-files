#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("value of num = %d\n", num);
    printf("address of num = %p\n", ptr);
    printf("value of  using pointer = %d\n", *ptr);

    return 0;
}
