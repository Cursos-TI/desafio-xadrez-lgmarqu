#include<stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("TORRE: MOVE 5 CASAS Á FRENTE\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas){
    if(casas > 0){
    printf("RAINHA: MOVE 8 CASAS Á DIREITA\n");
    moverRainha(casas - 1);
    }
}
void moverBispo(int casas){
    if(casas > 0){
        for(int j = 1; j <= 4; j++){
        printf("BISPO: MOVA PARA FRENTE\n");
        }
        for(int i = 1; i <= 3; i++){
           printf("BISPO: MOVA PARA Á DIREITA\n");
        }
    moverBispo(casas - 1);
    }
}

void moverCavalo(int casas){
    if(casas > 0)
    {
        for(int i  = 1; i <= 2; i++)
        {
            printf("CAVALO: MOVA DUAS CASAS PARA FRENTE\n");
        }
        for(int j = 1; j <= 1; j++)
        {
                printf("CAVALO: MOVA UMA CASA Á DIREITA\n");
        }
        
        moverCavalo(casas - 1);
    }
}
    
    int main(){

    moverTorre(5);
    moverRainha(8);
    moverBispo(1);
    moverCavalo(1);
    

 return 0;   
}

