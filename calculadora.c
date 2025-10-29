#include <stdio.h>

int main()
{
    int operacao, num1, num2, result;
    
    printf("Essa eh sua calculadora ----------\n");
    printf("Escolha qual operacao matematica voce deseja realizar:\n");
    printf("1 --- Adicao (+)\n");
    printf("2 --- Subtracao (-)\n");
    printf("3 --- Multiplicacao (*)\n");
    printf("4 --- Divisao (/)\n");
    scanf("%d", &operacao);

    //Entrada dos números para a operação:

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o proximo numero: \n");
    scanf("%d", &num2);


    //Calculadora em ação:

    switch (operacao)
    {
    case 1:
        result = num1 + num2;
        break;
    
    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        if (num2 == 0)
        {
            printf("Erro! Nao podemos dividir numeros por zero.\n")
            result = 0;
        }else{
        result = num1 / num2;
        }
        break;
    
    default:
    printf("Invalido!!!");
        break;
    }

    //Mostrar meus resultados da calculadora:
    printf("O resultado da calculadora eh: %d", result);

    return 0;
}
