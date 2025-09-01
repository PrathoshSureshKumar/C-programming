#include <stdio.h>
int main() {
    int num;
    printf("Enter an octal number: ");
    scanf("%o", &num);   // input in octal
    printf("Integer: %d", num);
    return 0;
}
