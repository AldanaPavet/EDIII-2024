#include <stdio.h>

int main() {
    printf("Hello word \n");
    
    int x = 5;      // En binario: 00000101
    int y = x << 2; // Desplazar 2 posiciones a la izquierda (multiplicar por 4)
                    // 00010100 (20)

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}