#include <stdio.h>
int main(){
    int x, y, z;

    printf("Введите x: ");
    scanf("%d", &x);
    printf("Введите y: ");
    scanf("%d", &y);
    z = x + y;
    printf("%d + %d = %d\n", x, y, z);
	return 0;
}