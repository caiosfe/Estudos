#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    char Pais1[20], Pais2[20], Nome_Atributo1[20], Nome_Atributo2[20];
    int Populacao1, Populacao2, Pontos1, Pontos2;
    int Opcao1, Opcao2, Resultado1, Resultado2;
    float Area1, Area2, PIB1, PIB2;
    float Densidade1, Densidade2;
    float Atributo1_Carta1, Atributo2_Carta1, Atributo1_Carta2, Atributo2_Carta2;
    float Soma1, Soma2;

    printf("------- SUPER TRUNFO -------\n");

    printf("Insira os dados da carta 1:\n");

    printf("Nome do pais: ");
    fgets(Pais1, sizeof(Pais1), stdin);
    Pais1[strcspn(Pais1, "\n")] = '\0';

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

    Densidade1 = Populacao1 / Area1;

    printf("\nInsira os dados da carta 2:\n");

    printf("Nome do pais: ");
    fgets(Pais2, sizeof(Pais2), stdin);
    Pais2[strcspn(Pais2, "\n")] = '\0';

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

    Densidade2 = Populacao2 / Area2;

    printf("\n------- SELEÇÃO DE ATRIBUTOS -------\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha o primeiro atributo para comparação: ");
    scanf("%d", &Opcao1);

    switch (Opcao1) {
        case 1:
            Atributo1_Carta1 = Populacao1;
            Atributo1_Carta2 = Populacao2;
            strcpy(Nome_Atributo1,"Populacao");
            break;
        case 2:
            Atributo1_Carta1 = Area1;
            Atributo1_Carta2 = Area2;
            strcpy(Nome_Atributo1,"Area");
            break;
        case 3:
            Atributo1_Carta1 = PIB1;
            Atributo1_Carta2 = PIB2;
            strcpy(Nome_Atributo1,"PIB");
            break;
        case 4:
            Atributo1_Carta1 = Pontos1;
            Atributo1_Carta2 = Pontos2;
            strcpy(Nome_Atributo1,"Pontos turisticos");
            break;
        case 5:
            Atributo1_Carta1 = Densidade1;
            Atributo1_Carta2 = Densidade2;
            strcpy(Nome_Atributo1,"Densidade demografica");
            break;
        default:
            printf("OPÇÃO INVÁLIDA!");
            exit(1);
    }

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro): ");
    scanf("%d", &Opcao2);

    if (Opcao2 == Opcao1) {
        printf("Você escolheu o mesmo atributo duas vezes. Encerrando.\n");
        exit(1);
    }

    switch (Opcao2) {
        case 1:
            Atributo2_Carta1 = Populacao1;
            Atributo2_Carta2 = Populacao2;
            strcpy(Nome_Atributo2,"Populacao");
            break;
        case 2:
            Atributo2_Carta1 = Area1;
            Atributo2_Carta2 = Area2;
            strcpy(Nome_Atributo2,"Area");
            break;
        case 3:
            Atributo2_Carta1 = PIB1;
            Atributo2_Carta2 = PIB2;
            strcpy(Nome_Atributo2,"PIB");
            break;
        case 4:
            Atributo2_Carta1 = Pontos1;
            Atributo2_Carta2 = Pontos2;
            strcpy(Nome_Atributo2,"Pontos turisticos");
            break;
        case 5:
            Atributo2_Carta1 = Densidade1;
            Atributo2_Carta2 = Densidade2;
            strcpy(Nome_Atributo2,"Densidade demografica");
            break;
        default:
            printf("OPÇÃO INVÁLIDA!");
            exit(1);
    }

    Resultado1 = (Atributo1_Carta1 > Atributo1_Carta2) ? 1 : 0;
    Resultado2 = (Atributo2_Carta1 > Atributo2_Carta2) ? 1 : 0;

    printf("\n----- RESULTADOS -----\n");

    printf("Carta 1: %s | Carta 2: %s \n", Pais1, Pais2);
    printf("Atributo 1: %s\n", Nome_Atributo1);
    printf("Carta 1: %.2f X Carta 2: %.2f \n", Atributo1_Carta1, Atributo1_Carta2);

    if (Resultado1)
        printf("A carta 01 venceu no primeiro atributo!\n");
    else
        printf("A carta 02 venceu no primeiro atributo!\n");

    printf("Atributo 2: %s\n", Nome_Atributo2);
    printf("Carta 1: %.2f X Carta 2: %.2f \n", Atributo2_Carta1, Atributo2_Carta2);

    if (Resultado2)
        printf("A carta 01 venceu no segundo atributo!\n");
    else
        printf("A carta 02 venceu no segundo atributo!\n");

    if (Resultado1 > Resultado2) {
        printf("A carta 01 venceu nos dois atributos!\n");
    } else if (Resultado2 > Resultado1) {
        printf("A carta 02 venceu nos dois atributos!\n");
    } else {
        printf("Não houve vencedores! As cartas 01 e 02 empataram nos atributos!\n");
    }

    Soma1 = Atributo1_Carta1 + Atributo2_Carta1;
    Soma2 = Atributo1_Carta2 + Atributo2_Carta2;

    if (Soma1 > Soma2) {
        printf("A carta 01 venceu na soma dos dois atributos, com um resultado de %.2f\n", Soma1);
    } else if (Soma2 > Soma1) {
        printf("A carta 02 venceu na soma dos dois atributos, com um resultado de %.2f\n", Soma2);
    } else {
        printf("Empate na soma dos atributos: %.2f\n", Soma1);
    }

    return 0;

}
