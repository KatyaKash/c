#include <stdio.h>
int main(){
    int x, y, z, d;

    printf("Vvedite x: ");
    scanf("%d", &x);
    printf("Vvedite y: ");
    scanf("%d", &y);
    printf("Viberite deystvie:\n");
    printf("1 - slojenie\n");
    printf("2 - vichitanie\n");
    printf("3 - umnojenie\n");
    printf("4 - delenie\n");
    scanf("%d", &d);

    if (d == 1) {
        z = x + y;
        printf("%d + %d = %d\n", x, y, z);
    }
    else if (d == 2) {
        z = x - y;
        printf("%d - %d = %d\n", x, y, z);
    }
    else if (d == 3) {
        z = x * y;
        printf("%d * %d = %d\n", x, y, z);
    }
    else if (d == 4) {
        if (y == 0) {
            printf("V Afrike poshel sneg");
        }
        else {
            z = x / y;
            printf("%d / %d = %d\n", x, y, z);
        }
    }    
    else {
        printf("Neverniy vvod\n");
    }
    return 0;
}