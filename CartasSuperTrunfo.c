#include <stdio.h>
   
int main(){
// Dados carta 01
    char estado1;
    char codigo1[5]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    // Dados carta 02
    char estado2;
    char codigo2[5]; 
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

// Leitura dos dados da carta 01

    printf("Cadastro da carta 01:\r\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");                     
    scanf(" %49[^\n]", cidade1);

    printf("População: ");
    scanf( "%d", &populacao1);

    printf("Área em Km2: ");
    scanf("%f", &area1);

    printf("Qual o PIB (em bilhões de reais): ");
    scanf ("%f", &pib1);

    printf("Número de pontos turisticos: ");
    scanf ("%d", &pontosturisticos1);


// Leitura dos dados da carta 02

    printf("\r\nCadastro da carta 02:\r\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A02): ");
    scanf( "%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em Km2: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf ("%f", &pib2);

    printf("Número de pontos turisticos: ");
    scanf ("%d", &pontosturisticos2);

//Exibição de dados cartas 01

printf ("\r\n - Carta 01 - \r\n");
printf ("Estado: %c\r\n", estado1);
printf ("Codigo: %s\r\n", codigo1);
printf ("Cidade: %s\r\n", cidade1);
printf ("População: %d\r\n", populacao1);
printf ("Area em KM2: %f\r\n", area1);
printf ("PIB em Bilhões R$: %f\r\n", pib1);
printf ("Número de pontos turisticos: %d\r\n", pontosturisticos1);

//Exibição de dados cartas 02

printf ("\r\n - Carta 02 - \r\n");
printf ("Estado: %c\r\n", estado2);
printf ("Codigo: %s\r\n", codigo2);
printf ("Cidade: %s\r\n", cidade2);
printf ("População: %d\r\n", populacao2);
printf ("Area em KM2: %f\r\n", area2);
printf ("PIB em Bilhões R$: %f\r\n", pib2);
printf ("Número de pontos turisticos: %d\r\n", pontosturisticos2);





return 0;
}
