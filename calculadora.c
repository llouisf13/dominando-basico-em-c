#include <stdio.h>

float somar(float num1, float num2){
    return num1 + num2;
}

float subtrair(float num1, float num2){
    return num1 - num2;
}

float multiplicar(float num1, float num2){
    return num1 * num2;
}

float dividir(float num1, float num2){
    if (num2 == 0)
    {
       printf("Erro! Dividido por zero sera zero!\n");
       return 0.0f;
    }else{
    return num1 / num2;
    }
}

int main()
{
    int operacao;
    float num1, num2, result;
    
    printf("Essa eh sua calculadora ----------\n");
    printf("Escolha qual operacao matematica voce deseja realizar:\n");
    printf("1 --- Adicao (+)\n");
    printf("2 --- Subtracao (-)\n");
    printf("3 --- Multiplicacao (*)\n");
    printf("4 --- Divisao (/)\n");
    scanf("%d", &operacao);

    //Entrada dos números para a operação:

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite o proximo numero: \n");
    scanf("%f", &num2);


    //Calculadora em ação:

    switch (operacao)
    {
    case 1:
        result = somar(num1, num2);
        break;
    case 2:
        result = subtrair(num1, num2);    
        break;
    case 3:
        result = multiplicar(num1, num2);    
        break;
    case 4:
        result = dividir(num1, num2);    
        break;
    default:
    printf("Erro, opcao invalida!!!!\n");
    return 0.0f;
        break;
    }

    //Mostrar meus resultados da calculadora:
    printf("O resultado da calculadora eh: %.2f \n", result);

    return 0;
}
