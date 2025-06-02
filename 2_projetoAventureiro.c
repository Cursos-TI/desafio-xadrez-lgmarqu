#include<stdio.h>

int main(){

    int t1 = 1;
    int r1 = 1;
    int cavalo = 1;
// movimentação da torre com o while.
   while(t1 <= 5 ){
        printf("TORRE: MOVE 5 CASAS Á FRENTE\n");
         t1 ++;
}printf("\n");
// Movimentação da rainha com o do-while.
do
    {
        printf("RAINHA: MOVE 8 CASAS Á DIREITA\n");
        r1 ++;
    } while (r1 <= 8);

printf("\n");  
// Movimentação do Bispo usando FOR 
    for(int b1 = 1; b1 <= 9; b1++){
        printf("BISPO: MOVA 9 CASAS DIAGONAL\n");
    }
printf("\n");
// movimentação CAVALO WHILE C/ FOR

    while(cavalo--){
        for(int i = 1; i <= 2; i++){
            printf("CAVALO: MOVE 2 DUAS CASAS CIMA\n");
        }
    printf("CAVALO: MOVE 1 CASA Á DIREITA\n");
    }
return 0;
}
