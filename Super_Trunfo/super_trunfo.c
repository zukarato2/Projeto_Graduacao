#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[3];       // ex.: "RJ"
    char codigo1[4];       // ex.: "A01" (+ '\0' => 4)
    char cidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int  pontosTuristicos1;

    // Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("UF (Ex: RJ, SP, MG, Etc...): ");
    scanf("%2s", estado1);              // lê até 2 chars + '\0'

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);              // lê até 3 chars + '\0'

    getchar();                          // consome o '\n' que sobrou
    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  // remove o '\n' do fgets

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("UF (Ex: RJ, SP, MG, Etc...): ");
    scanf("%2s", estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}





/* 
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/