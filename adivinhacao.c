#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("Esse eh o jogo da adivinhacao: \n");
    srand(time(NULL));

    int numeros = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    
    do
    {
        printf("Adivinhe o numero: \n");
        scanf("%d", &palpite);
        tentativas++;
        if(palpite > numeros){
            printf("Palpite muito alto!\n");
        }else if(palpite < numeros){
            printf("Seu palpite agora foi muito baixo!\n");
        }else{
            printf("Parabens, voce acertou apos %d\n tentativas", tentativas);
            break;
        }
    }while (palpite != numeros);
   

    return 0;
}
