// JOGO SUPER TRUNFO DE CIDADES

#include <stdio.h>
#include <string.h>

int main() {
    // CARTA 01
    char estadodacidade[3];
    char codigodacarta[5];
    char nomedacidade[100];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("CARTA 1:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade);

    printf("Codigo da carta: ");
    scanf("%4s", codigodacarta);

    getchar(); // limpar o \n que ficou no buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade, sizeof(nomedacidade), stdin);
    nomedacidade[strcspn(nomedacidade, "\n")] = 0;

    printf("Populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Area da cidade: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    // CARTA 02
    char estadodacidade2[3];
    char codigodacarta2[5];
    char nomedacidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;

    printf("\nCARTA 2:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade2);

    printf("Codigo da carta: ");
    scanf("%4s", codigodacarta2);

    getchar(); // limpar o \n do buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("Populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibindo CARTA 01
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estadodacidade);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Area : %.2f Km²\n", area);
    printf("PIB : %.2f Bilhoes R$\n", PIB);
    printf("Numero de Pontos turisticos : %d\n", pontosturisticos);

    // Exibindo CARTA 02
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estadodacidade2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("Area : %.2f Km²\n", area2);
    printf("PIB : %.2f Bilhoes R$\n", PIB2);
    printf("Numero de Pontos turisticos : %d\n", pontosturisticos2);

    return 0;
}