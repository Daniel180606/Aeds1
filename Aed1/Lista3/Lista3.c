#include <stdio.h>
#include <string.h>

void method_01()
{
    char palavra[100];
    int i;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    printf("\nLetras maiusculas: ");

    for(i=0; palavra[i]!='\0'; i++)
    {
        if(palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c ", palavra[i]);
        }
    }

    printf("\n");
}

void method_02()
{
    char palavra[100];
    int i, contador = 0;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    printf("\nLetras maiusculas: ");

    for(i=0; palavra[i]!='\0'; i++)
    {
        if(palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c ", palavra[i]);
            contador++;
        }
    }

    printf("\nQuantidade = %d\n", contador);
}

void method_03()
{
    char palavra[100];
    int i, contador = 0;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    printf("\nMaiusculas do fim para o inicio: ");

    for(i=strlen(palavra)-1; i>=0; i--)
    {
        if(palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            printf("%c ", palavra[i]);
            contador++;
        }
    }

    printf("\nQuantidade = %d\n", contador);
}

void method_04()
{
    char cadeia[100];
    int i, contador = 0;

    printf("\nDigite uma cadeia: ");
    scanf("%s", cadeia);

    printf("\nLetras encontradas: ");

    for(i=0; cadeia[i]!='\0'; i++)
    {
        if((cadeia[i] >= 'A' && cadeia[i] <= 'Z') ||
           (cadeia[i] >= 'a' && cadeia[i] <= 'z'))
        {
            printf("%c ", cadeia[i]);
            contador++;
        }
    }

    printf("\nQuantidade = %d\n", contador);
}

void method_05()
{
    char cadeia[100];
    int i, contador = 0;

    printf("\nDigite uma cadeia: ");
    scanf("%s", cadeia);

    printf("\nDigitos do fim para o inicio: ");

    for(i=strlen(cadeia)-1; i>=0; i--)
    {
        if(cadeia[i] >= '0' && cadeia[i] <= '9')
        {
            printf("%c ", cadeia[i]);
            contador++;
        }
    }

    printf("\nQuantidade = %d\n", contador);
}

void method_06()
{
    char cadeia[100];
    int i, contador = 0;

    printf("\nDigite uma cadeia: ");
    scanf("%s", cadeia);

    printf("\nCaracteres especiais: ");

    for(i=0; cadeia[i]!='\0'; i++)
    {
        if(!((cadeia[i] >= '0' && cadeia[i] <= '9') ||
             (cadeia[i] >= 'A' && cadeia[i] <= 'Z') ||
             (cadeia[i] >= 'a' && cadeia[i] <= 'z')))
        {
            printf("%c ", cadeia[i]);
            contador++;
        }
    }

    printf("\nQuantidade = %d\n", contador);
}

void method_07()
{
    int a, b, n, x;
    int contador = 0;
    int i;

    printf("\nDigite os limites a e b: ");
    scanf("%d%d", &a, &b);

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &x);

        if(x % 6 == 0 && x >= a && x <= b)
        {
            contador++;
        }
    }

    printf("\nQuantidade encontrada = %d\n", contador);
}

void method_08()
{
    int a, b, n, x;
    int contador = 0;
    int i;

    printf("\nDigite os limites a e b: ");
    scanf("%d%d", &a, &b);

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &x);

        if(x % 4 == 0 &&
           x % 5 != 0 &&
           x >= a &&
           x <= b)
        {
            contador++;
        }
    }

    printf("\nQuantidade encontrada = %d\n", contador);
}

void method_09()
{
    double a, b, x;
    int n;
    int i;

    printf("\nDigite a e b: ");
    scanf("%lf%lf", &a, &b);

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    printf("\nValores encontrados:\n");

    for(i=0; i<n; i++)
    {
        scanf("%lf", &x);

        if(x > a && x < b)
        {
            int parteInteira = (int)x;

            if(parteInteira % 2 == 0)
            {
                printf("%.2lf\n", x);
            }
        }
    }
}

void method_10()
{
    double a, b, x;
    double fracao;
    int n;
    int i;

    printf("\nDigite a e b: ");
    scanf("%lf%lf", &a, &b);

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    printf("\nValores encontrados:\n");

    for(i=0; i<n; i++)
    {
        scanf("%lf", &x);

        fracao = x - (int)x;

        if(!(fracao > a && fracao < b))
        {
            printf("%.2lf\n", x);
        }
    }
}

void method_E1()
{
    char texto[200];
    char especiais[200];
    int i, j = 0;

    getchar();

    printf("\nDigite uma linha: ");
    fgets(texto, sizeof(texto), stdin);

    for(i=0; texto[i]!='\0'; i++)
    {
        if(!((texto[i] >= '0' && texto[i] <= '9') ||
             (texto[i] >= 'A' && texto[i] <= 'Z') ||
             (texto[i] >= 'a' && texto[i] <= 'z')))
        {
            especiais[j] = texto[i];
            j++;
        }
    }

    especiais[j] = '\0';

    printf("\nSimbolos nao alfanumericos: %s\n", especiais);
}

void method_E2()
{
    char texto[100];
    int i;
    int somenteLetras = 1;

    printf("\nDigite uma cadeia: ");
    scanf("%s", texto);

    for(i=0; texto[i]!='\0'; i++)
    {
        if(!((texto[i] >= 'A' && texto[i] <= 'Z') ||
             (texto[i] >= 'a' && texto[i] <= 'z')))
        {
            somenteLetras = 0;
            break;
        }
    }

    if(somenteLetras)
    {
        printf("\nA cadeia contem apenas letras.\n");
    }
    else
    {
        printf("\nA cadeia NAO contem apenas letras.\n");
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