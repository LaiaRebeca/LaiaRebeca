#include <stdio.h>
#include <stdlib.h>

int main( void ){
        int B;
        int b;
        int h;
        int a;

        printf("Valor da base maior: ");
        scanf("%d", &B);
        printf("Valor da base menor: ");
        scanf("%d", &b);
        printf("Valor da altura: ");
        scanf("%d", &h);

        a = (B + b) * h / 2;

        printf("Area = %d\n", a);

        return 0;
}