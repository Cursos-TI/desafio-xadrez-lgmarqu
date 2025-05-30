#include<stdio.h>


int main(){

    int t1 = 1;
    int b1 = 1;
    int r1 = 1;
   
// movimentação da torre com o while.
   while(t1 <= 5 ){
        printf("TORRE: MOVE 5 CASAS Á FRENTE\n");
         t1 ++;
}
    
// Movimentação da rainha com o do-while.
do
    {
        printf("RAINHA: MOVE 8 CASAS Á DIREITA\n");
        r1 ++;
    } while (r1 <= 8);
    
// Movimentação do Bispo com FOR aninhado.

    for (b1 = 1; b1 <= 4; b1++){
        printf("BISPO: MOVA 4 CASAS Á DIREITA\n");
        }for(b1 = 1; b1 <= 5; b1++){
            printf("BISPO: APÓS, MOVA + 5 CASAS Á FRENTE PARA DIAGONAL.\n");
    }     
}