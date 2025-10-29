#include <stdio.h>

int main()
{
    int n, i, procurar, encontrado = 0;

    printf("Digite quantos numeros voce quer digitar: \n");
    scanf("%d", &n);

    int vetor[n];

    //Aqui entra meu for para percorrer e digitar meus números
    printf("Digite os numeros para vetor:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Agora digite o numero que deseja buscar: \n");
    scanf("%d", &procurar);

    //Varrendo para encontrar meu número...
    
    //1 = achou, 0 = não achou

    for (i = 0; i < n; i++)
    {
        if (vetor[i] == procurar)
        {
            printf("Numero encontrado na posicao %d do vetor \n", i);
            encontrado = 1;
            break;
        }
        
    }

    if (encontrado == 0)
    {
        printf("Numero nao encontrado. \n");
    }
    
    //Aqui encerro meu programa

    return 0;
}