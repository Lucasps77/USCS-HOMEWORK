#include <stdio.h>
int diagonalPrincipal( int matriz[5][5]);

int diagonalPrincipal(int matriz[5][5]){
    int i, j;
    
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

   
    for (i = 0; i < 5; i++) {
        matriz[i][i] = 1;
    }

 
    printf("Matriz resultante:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    
}

int main() {
    int matriz[5][5];
   
   diagonalPrincipal(matriz);

    
   
    return 0;
}
