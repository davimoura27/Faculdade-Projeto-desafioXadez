#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {   printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}
void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Cima direita\n");
        moverBispo(casas - 1);
    }
    
}
void moverBispoLoop(int linha,int coluna){
   for (int i = 0; i < linha; i++)
   {
     for (int j = 0; j < coluna; j++)
     {
        printf("Diagonal: Cima Direita\n");
     }
     
   }
   
}

void moverCavalo(){
    printf("\nMovimento cavalo:\n\n");

    int maxLinhas = 3;
    int maxColunas = 2;

    for (int i = 0; i < maxLinhas; i++)
    {
        for (int j = 0; j < maxColunas; j++)
        {
           if (i < 2)
           {
             printf("Cima\n");
             continue;
           }
           if (j == 0)
           {
             printf("Direita\n");
             break;
            }
           
           
        }
        if(i == 2) break;
        
    }
    
}
int main(){
    printf("Movimento da Torre:\n\n");
    moverTorre(5);

    printf("\nMovimento Bispo (recursivo):\n\n");
    moverBispo(3);

    printf("\nMovimento do Bispo(Loop aninhado):\n\n");
    moverBispoLoop(2,2);

    printf("\nMovimento Rainha:\n\n");
    moverRainha(4);

    moverCavalo();

    return 0;
}