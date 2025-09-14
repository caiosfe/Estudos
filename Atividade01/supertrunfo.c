#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main() {
    char Estado1[4], Estado2[4], Codigo1[5], Codigo2[5], Cidade1[20], Cidade2[20];
    int Populacao1, Populacao2, Pontos1, Pontos2;
    float Area1, Area2, PIB1, PIB2, PIBper1, PIBper2, Densidade1, Densidade2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da carta 1:\n");

    printf("Estado: ");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0';

    printf("Codigo: ");
    fgets(Codigo1, sizeof(Codigo1), stdin);
    Codigo1[strcspn(Codigo1, "\n")] = '\0';

    printf("Nome da cidade: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &Populacao1);
    limpar_buffer();

    printf("Area: ");
    scanf("%f", &Area1);
    limpar_buffer();

    printf("PIB: ");
    scanf("%f", &PIB1);
    limpar_buffer();

    printf("N de pontos turisticos: ");
    scanf("%d", &Pontos1);
    limpar_buffer();

    // Cálculo de PIB per capita e Densidade demográfica da Carta 1
    PIBper1 = (PIB1 * 1000000000) / Populacao1;
    Densidade1 = Populacao1 / Area1;

    // Entrada de dados da Carta 2
    printf("Insira os dados da carta 2:\n");

    printf("Estado: ");
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0';

    printf("Codigo: ");
    fgets(Codigo2, sizeof(Codigo2), stdin);
    Codigo2[strcspn(Codigo2, "\n")] = '\0';

    printf("Nome da cidade: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &Populacao2);
    limpar_buffer();

    printf("Area: ");
    scanf("%f", &Area2);
    limpar_buffer();

    printf("PIB: ");
    scanf("%f", &PIB2);
    limpar_buffer();

    printf("N de pontos turisticos: ");
    scanf("%d", &Pontos2);
    limpar_buffer();

    // Cálculo de PIB per capita e Densidade demográfica da Carta 2
    PIBper2 = (PIB2 * 1000000000) / Populacao2;
    Densidade2 = Populacao2 / Area2;

    // Saída dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s \n", Estado1);
    printf("Codigo: %s \n", Codigo1);
    printf("Nome de Cidade: %s \n", Cidade1);
    printf("Populacao: %d \n", Populacao1);
    printf("Area: %.2f km quadrados\n", Area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de pontos turisticos: %d \n", Pontos1);
    printf("Densidade Populacional: %.2f hab/km quadrado\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBper1);

    // Saída dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Nome de Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2f km quadrados\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d \n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km quadrado\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);

    return 0;
}