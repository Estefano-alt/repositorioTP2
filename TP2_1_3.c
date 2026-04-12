#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5
#define M 7

int main() {
    // Inicializamos la semilla para los números aleatorios
    srand(time(NULL)); 

    int i, j;
    int mt[N][M];
    
    // Apuntamos al primer elemento absoluto de la matriz
    int *puntero = &mt[0][0]; 

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            // Asignación usando aritmética de punteros
            *(puntero + (i * M) + j) = 1 + rand() % 100;
            
            // Impresión usando aritmética de punteros
            printf("%d\t", *(puntero + (i * M) + j));
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
    
    return 0;
}