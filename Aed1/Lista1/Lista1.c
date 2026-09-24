#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void method_01(){
    int lado_original = 0;
    printf("\n%s", "Digite um numero para ser o lado do quadrado original\n");
    scanf("%d", &lado_original);
    int area_tres_maior = 0;
    int lado_maior = 0;
    lado_maior = 3 * lado_original;
    area_tres_maior = lado_maior * lado_maior;
    printf("\n%s", "O valor da area de um quadrado com lado 3 vezes maior é: ");
    printf("%d", area_tres_maior);
}

void method_02(){
    double lado_original = 0.0;
    printf("\n%s", "Digite um numero para ser o lado do quadrado original\n");
    scanf("%lf", &lado_original);
    double area_metade = 0.0;
    double lado_metade = 0.0;
    double perimetro_metade = 0.0;
    lado_metade = lado_original / 2.0;
    area_metade = lado_metade * lado_metade;
    perimetro_metade = lado_metade * 4.0;
    printf("\n%s", "O valor da area de um quadrado com o valor do lado sendo metade do original é: ");
    printf("%.2lf", area_metade);
    printf("\n%s", "O valor do perimetro de um quadrado com o valor do lado sendo metade do original é: ");
    printf("%.2lf", perimetro_metade);
}

void method_03(){
    int lado_original_1 = 0;
    int lado_original_2 = 0;
    printf("\n%s", "Digite dois numeros para ser os lados do retangulo original\n");
    scanf("%d", &lado_original_1);
    scanf("%d", &lado_original_2);
    int area_seis_maior = 0;
    area_seis_maior = (lado_original_1 * lado_original_2) * 6;
    printf("\n%s", "O valor da area seis vezes maior que a area original do retangulo é: ");
    printf("%d", area_seis_maior);
}

void method_04(){
    double lado_original_1 = 0.0;
    double lado_original_2 = 0.0;
    printf("\n%s", "Digite dois numeros para serem os lados do retangulo original\n");
    scanf("%lf", &lado_original_1);
    scanf("%lf", &lado_original_2);
    double lado1_quarto = 0.0;
    double lado2_quarto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;
    lado1_quarto = lado_original_1 / 4.0;
    lado2_quarto = lado_original_2 / 4.0;
    area = lado1_quarto * lado2_quarto;
    perimetro = 2.0 * (lado1_quarto + lado2_quarto);
    printf("\n%s", "Area do retangulo com um quarto dos lados: ");
    printf("%.2lf", area);
    printf("\n%s", "Perimetro do retangulo com um quarto dos lados: ");
    printf("%.2lf", perimetro);
}

void method_05(){
    double base = 0.0;
    double altura = 0.0;
    printf("\n%s", "Digite a base e a altura do triangulo\n");
    scanf("%lf", &base);
    scanf("%lf", &altura);
    double nova_altura = 0.0;
    double area = 0.0;
    nova_altura = altura * 2.0;
    area = (base * nova_altura) / 2.0;
    printf("\n%s", "Area do triangulo com o dobro da altura: ");
    printf("%.2lf", area);
}

void method_06(){
    double lado_original = 0.0;
    printf("\n%s", "Digite o lado do triangulo equilatero\n");
    scanf("%lf", &lado_original);
    double novo_lado = 0.0;
    double altura = 0.0;
    double area = 0.0;
    double perimetro = 0.0;
    novo_lado = lado_original * 3.0;
    altura = (sqrt(3.0) / 2.0) * novo_lado;
    area = (novo_lado * altura) / 2.0;
    perimetro = 3.0 * novo_lado;
    printf("\n%s", "Altura do triangulo: ");
    printf("%.2lf", altura);
    printf("\n%s", "Area do triangulo: ");
    printf("%.2lf", area);
    printf("\n%s", "Perimetro do triangulo: ");
    printf("%.2lf", perimetro);
}

void method_07(){
    double lado_original = 0.0;
    printf("\n%s", "Digite a medida do lado do cubo\n");
    scanf("%lf", &lado_original);
    double novo_lado = 0.0;
    double volume = 0.0;
    novo_lado = lado_original * 5.0;
    volume = novo_lado * novo_lado * novo_lado;
    printf("\n%s", "Volume do cubo com lado cinco vezes maior: ");
    printf("%.2lf", volume);
}

void method_08(){
    double comprimento = 0.0;
    double largura = 0.0;
    double altura = 0.0;
    printf("\n%s", "Digite comprimento, largura e altura\n");
    scanf("%lf", &comprimento);
    scanf("%lf", &largura);
    scanf("%lf", &altura);
    double novo_comprimento = 0.0;
    double nova_largura = 0.0;
    double nova_altura = 0.0;
    double volume = 0.0;
    novo_comprimento = comprimento / 8.0;
    nova_largura = largura / 8.0;
    nova_altura = altura / 8.0;
    volume = novo_comprimento * nova_largura * nova_altura;
    printf("\n%s", "Volume do paralelepipedo com um oitavo das medidas: ");
    printf("%.2lf", volume);
}

void method_09(){
    double raio_original = 0.0;
    printf("\n%s", "Digite o raio do circulo\n");
    scanf("%lf", &raio_original);
    double novo_raio = 0.0;
    double area_semicirculo = 0.0;
    novo_raio = raio_original / 6.0;
    area_semicirculo = (M_PI * novo_raio * novo_raio) / 2.0;
    printf("\n%s", "Area do semicirculo com um sexto do raio: ");
    printf("%.2lf", area_semicirculo);
}

void method_10(){
    double raio_original = 0.0;
    printf("\n%s", "Digite o raio da esfera\n");
    scanf("%lf", &raio_original);
    double novo_raio = 0.0;
    double volume = 0.0;
    novo_raio = raio_original * (3.0 / 4.0);
    volume = (4.0 / 3.0) * M_PI * novo_raio * novo_raio * novo_raio;
    printf("\n%s", "Volume da esfera com tres quartos do raio: ");
    printf("%.2lf", volume);
}

void method_E1(){
    double area = 0.0;
    printf("\n%s", "Digite a area da circunferencia\n");
    scanf("%lf", &area);
    double area_reduzida = 0.0;
    double raio = 0.0;
    area_reduzida = area / 7.0;
    raio = sqrt(area_reduzida / M_PI);
    printf("\n%s", "Raio correspondente a um setimo da area: ");
    printf("%.2lf", raio);
}

void method_E2(){
    double volume_original = 0.0;
    printf("\n%s", "Digite o volume da esfera\n");
    scanf("%lf", &volume_original);
    double novo_volume = 0.0;
    double raio = 0.0;
    double area_superficie = 0.0;
    novo_volume = volume_original * (5.0 / 8.0);
    raio = cbrt((3.0 * novo_volume) / (4.0 * M_PI));
    area_superficie = 4.0 * M_PI * raio * raio;
    printf("\n%s", "Raio da esfera: ");
    printf("%.2lf", raio);
    printf("\n%s", "Area da superficie da esfera: ");
    printf("%.2lf", area_superficie);
}

int main ( int argc, char* argv [ ] )
{
// definir dado
 int opcao = 0;
// identificar
 printf ( "%s\n", "Estudo dirigido, lista 1" );
 printf ( "%s\n", "Autor: Daniel Bueno Lacerda" );
 printf ( "\n" ); // mudar de linha
// acoes
// repetir
 do
 {
 // para mostrar opcoes
 printf ( "\n%s\n", "Opcoes:" );
 printf ( "\n%s" , "0 - Terminar" );
 printf ( "\n%s" , "1 - Method_01" );
 printf ( "\n%s" , "2 - Method_02" );
 printf ( "\n%s" , "3 - Method_03" );
 printf ( "\n%s" , "4 - Method_04" );
 printf ( "\n%s" , "5 - Method_05" );
 printf ( "\n%s" , "6 - Method_06" );
 printf ( "\n%s" , "7 - Method_07" );
 printf ( "\n%s" , "8 - Method_08" );
 printf ( "\n%s" , "9 - Method_09" );
 printf ( "\n%s" , "10 - Method 10" );
 printf ( "\n%s" , "11 - Method E1" );
 printf ( "\n%s" , "12 - Method E2" );
 printf ( "\n" );
 // ler a opcao do teclado
 printf ( "\n%s", "Escolha uma opcao = " );
 scanf ( "%d", &opcao );
 getchar( ); // para limpar a entrada de dados
 // para mostrar a opcao lida
 printf ( "\n%s%d", "Opcao escolhida = ", opcao );
 // escolher acao dependente da opcao
 switch ( opcao )
 {
 case 0: /* nao fazer nada */ break;
 case 1: method_01 ( ); break;
 case 2: method_02 ( ); break;
 case 3: method_03 ( ); break;
 case 4: method_04 ( ); break;
 case 5: method_05 ( ); break;
 case 6: method_06 ( ); break;
 case 7: method_07 ( ); break;
 case 8: method_08 ( ); break;
 case 9: method_09 ( ); break;
 case 10: method_10 ( ); break;
 case 11: method_E1 ( ); break;
 case 12: method_E2 ( ); break;
 default: // comportamento padrao
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 } // end switch
 }
 while ( opcao != 0 );
// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )