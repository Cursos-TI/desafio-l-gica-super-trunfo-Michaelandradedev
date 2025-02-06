#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
// Definição das variáveis gerais:
    double densidadevencedora;
    double superpoder;


//carta 01
    char codigocarta1[3];
    char estado1[60];
    char cidade1[60];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float densidadepopulacional1;
    double PIB1;
    double pibpercapita1;
    double superpoder1;

//carta 02
    char codigocarta2[3];
    char estado2[60];
    char cidade2[60];
    int populacao2;
    int numerodepontosturisticos2;
    float area2;
    float densidadepopulacional2;
    double PIB2;
    double pibpercapita2;
    double superpoder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

// Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas;

// Carta 1;
    printf("**** BEM VINDO AO CADASTRO DO SUPERTRUNFO!! ****\n");
    printf("\n");

    printf("Digite o COD da carta 1: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado1);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

// Calculos - densidade populacional e PIB per Capita CARTA 1;
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = PIB1 / populacao1;

//calculo super poder carta 1;
    superpoder1 = populacao1 + area1 + PIB1 + numerodepontosturisticos1;

// Carta 2;
    printf("Digite o COD da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado2);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);


// Calculos - densidade populacional, PIB per Capita e super poder CARTA 2;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = PIB2 / populacao2;

//calculo super poder carta 2;
    superpoder2 = populacao2 + area2 + PIB2 + numerodepontosturisticos2;

    // Impressão dos valores CARTA 1 e 2, ordenados de acordo com a organização solicitada;

    printf("\n>>> CARTA 1 <<<\n");
    printf("COD: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2lf\n", PIB1);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2lf\n", pibpercapita1);
    printf("*******SUPER PODER %.2lf\n", (double)superpoder1);


    printf("\n>>> CARTA2 <<<\n");
    printf("COD: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2lf\n", PIB2);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2lf\n", pibpercapita2);
    printf("*******SUPER PODER %.2lf\n", (double)superpoder2);
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    printf("\n");
    printf("   >>>>>>> COMPARAÇÃO E CARTA VENCEDORA!! <<<<<<<\n");
    printf("\n");

    if (populacao1 > populacao2) {
    printf(">> POPULAÇÃO << A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">> POPULAÇÃO << A cidade vencedora é: %s\n", cidade2);
    }

    if (area1 > area2) {
    printf(">>> AREA <<< A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">>> AREA <<< A cidade vencedora é: %s\n", cidade2);
    }

    if (PIB1 > PIB2) {
    printf(">>>> PIB <<<< A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">>>> PIB <<<< A cidade vencedora é: %s\n", cidade2);
    }

    if (numerodepontosturisticos1 > numerodepontosturisticos2) {
    printf(">>>> PONTOS TURÍSTICOS <<<<< A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">>>> PONTOS TURÍSTICOS <<<<< A cidade vencedora é: %s\n", cidade2);
    }

    if (densidadepopulacional1 < densidadepopulacional2) {
    printf(">>>>> DENSIDADE POPULACIONAL <<<<<< A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">>>>> DENSIDADE POPULACIONAL <<<<<< A cidade vencedora é: %s\n", cidade2);
    }

    if (superpoder1 > superpoder2) {
    printf(">>>>>> SUPER PODER <<<<<<< A cidade vencedora é: %s\n", cidade1);
    } else {
    printf(">>>>>> SUPER PODER <<<<<<< A cidade vencedora é: %s\n", cidade2);
    }

    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n");
    printf("\n<<<<<<<<< OBRIGADO POR JOGAR SUPER TRUNFO! >>>>>>\n");
    printf("\n");



    return 0;
}
