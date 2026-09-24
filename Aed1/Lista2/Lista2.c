#include <stdio.h>

void method_01()
{
    int valor = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0)
    {
        printf("\nO valor %d e PAR.\n", valor);
    }
    else
    {
        printf("\nO valor %d e IMPAR.\n", valor);
    }
}

void method_02()
{
    int valor = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    if ((valor % 2 != 0 && valor < -25) ||
        (valor % 2 == 0 && valor > 25))
    {
        printf("\nO valor atende a condicao.\n");
    }
    else
    {
        printf("\nO valor NAO atende a condicao.\n");
    }
}

void method_03()
{
    int valor = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    if (valor > 35 && valor < 65)
    {
        printf("\nO valor pertence ao intervalo aberto (35:65).\n");
    }
    else
    {
        printf("\nO valor NAO pertence ao intervalo aberto (35:65).\n");
    }
}

void method_04()
{
    int valor = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    if (valor >= 15 && valor <= 60)
    {
        printf("\nO valor pertence ao intervalo fechado [15:60].\n");
    }
    else
    {
        printf("\nO valor NAO pertence ao intervalo fechado [15:60].\n");
    }
}

void method_05()
{
    int valor = 0;

    printf("\nDigite um valor inteiro:\n");
    scanf("%d", &valor);

    int intervalo1 = (valor >= 10 && valor <= 30);
    int intervalo2 = (valor > 25 && valor < 50);

    if (intervalo1 && intervalo2)
    {
        printf("\nO valor pertence a INTERSECAO dos intervalos.\n");
    }
    else
    if (intervalo1 || intervalo2)
    {
        printf("\nO valor pertence a apenas UM dos intervalos.\n");
    }
    else
    {
        printf("\nO valor NAO pertence a nenhum dos intervalos.\n");
    }
}

void method_06()
{
    int valor1 = 0;
    int valor2 = 0;

    printf("\nDigite dois valores inteiros:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if (valor1 % 2 != 0 && valor2 % 2 == 0)
    {
        printf("\nO primeiro e impar e o segundo e par.\n");
    }
    else
    {
        printf("\nA condicao NAO foi satisfeita.\n");
    }
}

void method_07()
{
    int valor1 = 0;
    int valor2 = 0;

    printf("\nDigite dois valores inteiros:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if ((valor1 % 2 == 0 && valor1 < 0) &&
        (valor2 % 2 != 0 && valor2 > 0))
    {
        printf("\nA condicao foi satisfeita.\n");
    }
    else
    {
        printf("\nA condicao NAO foi satisfeita.\n");
    }
}

void method_08()
{
    double valor1 = 0.0;
    double valor2 = 0.0;

    printf("\nDigite dois valores reais:\n");
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);

    double um_terco = valor1 / 3.0;

    if (valor2 < um_terco)
    {
        printf("\nO segundo valor e MENOR que um terco do primeiro.\n");
    }
    else
    if (valor2 == um_terco)
    {
        printf("\nO segundo valor e IGUAL a um terco do primeiro.\n");
    }
    else
    {
        printf("\nO segundo valor e MAIOR que um terco do primeiro.\n");
    }
}

void method_09()
{
    double valor1 = 0.0;
    double valor2 = 0.0;
    double valor3 = 0.0;

    printf("\nDigite tres valores reais:\n");
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);
    scanf("%lf", &valor3);

    if (valor2 != valor3)
    {
        if ((valor1 >= valor2 && valor1 <= valor3) ||
            (valor1 >= valor3 && valor1 <= valor2))
        {
            printf("\nO primeiro valor esta entre os dois ultimos.\n");
        }
        else
        {
            printf("\nO primeiro valor nao esta entre os dois ultimos.\n");
        }
    }
    else
    {
        printf("\nOs dois ultimos valores sao iguais.\n");
    }
}

void method_10()
{
    double valor1 = 0.0;
    double valor2 = 0.0;
    double valor3 = 0.0;

    printf("\nDigite tres valores reais:\n");
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);
    scanf("%lf", &valor3);

    if (valor1 != valor2 &&
        valor1 != valor3 &&
        valor2 != valor3)
    {
        if ((valor1 < valor2 && valor1 < valor3) ||
            (valor1 > valor2 && valor1 > valor3))
        {
            printf("\nO primeiro valor NAO esta entre os dois ultimos.\n");
        }
        else
        {
            printf("\nO primeiro valor esta entre os dois ultimos.\n");
        }
    }
    else
    {
        printf("\nExistem valores iguais.\n");
    }
}

void method_E1()
{
    char valor1 = ' ';
    char valor2 = ' ';
    char valor3 = ' ';

    printf("\nDigite tres caracteres:\n");
    scanf(" %c", &valor1);
    scanf(" %c", &valor2);
    scanf(" %c", &valor3);

    if ((valor1 >= valor2 && valor1 <= valor3) ||
        (valor1 >= valor3 && valor1 <= valor2))
    {
        printf("\nO primeiro caractere esta entre os outros dois ou e igual a um deles.\n");
    }
    else
    {
        printf("\nO primeiro caractere NAO esta entre os outros dois.\n");
    }
}

void method_E2()
{
    char valor1 = ' ';
    char valor2 = ' ';
    char valor3 = ' ';

    printf("\nDigite tres caracteres:\n");
    scanf(" %c", &valor1);
    scanf(" %c", &valor2);
    scanf(" %c", &valor3);

    if (valor2 != valor3)
    {
        if ((valor1 < valor2 && valor1 < valor3) ||
            (valor1 > valor2 && valor1 > valor3))
        {
            printf("\nO primeiro caractere esta FORA do intervalo.\n");
        }
        else
        {
            printf("\nO primeiro caractere esta DENTRO do intervalo.\n");
        }
    }
    else
    {
        printf("\nO segundo e o terceiro caracteres sao iguais.\n");
    }
}

int main()
{
    int opcao = 0;

    do
    {
        printf("\n");
        printf("\n0  - Terminar");
        printf("\n1  - Method_01");
        printf("\n2  - Method_02");
        printf("\n3  - Method_03");
        printf("\n4  - Method_04");
        printf("\n5  - Method_05");
        printf("\n6  - Method_06");
        printf("\n7  - Method_07");
        printf("\n8  - Method_08");
        printf("\n9  - Method_09");
        printf("\n10 - Method_10");
        printf("\n11 - Method_E1");
        printf("\n12 - Method_E2");

        printf("\n\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 0: break;
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            case 9: method_09(); break;
            case 10: method_10(); break;
            case 11: method_E1(); break;
            case 12: method_E2(); break;

            default:
                printf("\nOpcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}