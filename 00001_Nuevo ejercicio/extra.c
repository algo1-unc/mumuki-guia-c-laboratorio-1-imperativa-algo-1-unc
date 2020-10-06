#include <stdio.h>

int my_estado1(void) {
    int x;
    int y;
    int z;
    printf("ingrese estado1\n");
    printf("\tx:");scanf("%d", &x);
    printf("\ty:");scanf("%d", &y);
    printf("\tz:");scanf("%d", &z);  
    return x + y + 1;
}

int main(){
    estado1();
    return 0;
}