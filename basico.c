#include <stdio.h>

int retorna(int vet[], int n, int buscar){
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == buscar)
        {
           return 1;
        }
    }
    return 0;
}

int main()
{
    int n, i, procurar, resultado;

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

    resultado = retorna(vetor, n, procurar);

    if (resultado == 1)
    {
        printf("Numero encontrado. \n");
    } else{
        printf("Numero nao foi encontrado. \n");
    }
    
    
    return 0;
}