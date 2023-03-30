#include <stdio.h>

int main()
{
    char op;
    int num1;
    int num2;

    printf("Bem-vindo à nossa calculadora!\n");

    do {
        printf("\nQual operação você deseja realizar?\n");
        printf("Adição (A), Subtração (S), Multiplicação (M) ou Divisão (D)?\n");
        printf("Para sair, digite E.\n");

        scanf(" %c", &op);

        if(op == 'E') {
            break;
        }

        printf("Digite o primeiro número: \n");
        scanf("%d", &num1);

        printf("Digite o segundo número: \n");
        scanf("%d", &num2);

        switch(op){
            case 'A':
                printf("%d\n", num1 + num2);
                break;

            case 'S':
                printf("%d\n", num1 - num2);
                break;

            case 'M':
                printf("%d\n", num1 * num2);
                break;

            case 'D':
                printf("%d\n", num1 / num2);
                break;

            default:
                printf("Operação inválida. Tente novamente.\n");
                break;
        }
    } while(op != 'E');

    printf("Obrigado por usar nossa calculadora!\n");

    return 0;
}