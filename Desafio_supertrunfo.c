// JOGO SUPER TRUNFO DE CIDADES

#include <stdio.h>
#include <string.h>

/*
    DADOS PARA UTILIZAR O CÓDIGO:

    !!OBSERVAÇÃO --> UTILIZE OS SOMENTE OS DADOS APÓS O (:), (SE FOR PRECISO) COPIAR E APERTAR O BOTÃO DIREITO DO MOUSE, UM DE CADA VEZ.
                                CERTIFIQUE-SE DE NÃO COPIAR DEIXANDO ESPAÇOS VAZIOS.
    --------------------- CARTA 01 --------------------------------
    Estado: A

    Código: A01

    Nome da Cidade: São Paulo

    População: 12325000

    Área: 1521.11 

    PIB: 699.28 

    Número de Pontos Turísticos: 50

    --------------------- CARTA 02 -------------------------------
    Estado: B

    Código: B02

    Nome da Cidade: Rio de Janeiro

    População: 6748000

    Área: 1200.25 

    PIB: 300.50 

    Número de Pontos Turísticos: 30

*/

int main() {
    // CARTA 01
    char estadodacidade[3];
    char codigodacarta[5];
    char nomedacidade[100];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    float densidadepopulacional;// nivel aventureiro
    float PIBpercapita;//nivel aventureiro

    printf("CARTA 1:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade);

    printf("Código da carta: ");
    scanf("%4s", codigodacarta);

    getchar(); // limpar o \n que ficou no buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade, sizeof(nomedacidade), stdin);
    nomedacidade[strcspn(nomedacidade, "\n")] = 0;

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Área da cidade: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    //calcula automaticamente
    densidadepopulacional = (float)populacao / area;
    PIBpercapita = (PIB * 1000000000) / (float)populacao;//PIB convetido de bilhoes para reais

    // CARTA 02
    char estadodacidade2[3];
    char codigodacarta2[5];
    char nomedacidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;//nivel aventureiro
    float PIBpercapita2;//nivel aventureiro

    printf("\nCARTA 2:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade2);

    printf("Código da carta: ");
    scanf("%4s", codigodacarta2);

    getchar(); // limpar o \n do buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //calcula automaticamente
    densidadepopulacional2 = (float)populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / (float)populacao2;//PIB convertido de bilhoes para reais

    // Exibindo CARTA 01
    printf("\n--------------------------------- CARTA 1 --------------------------------------------\n");
    printf("Estado: %s\n", estadodacidade);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População da cidade: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões R$\n", PIB);
    printf("Numero de Pontos turísticos: %d\n", pontosturisticos);
    printf("A densidade populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("O PIB per capita: %.2f reais\n", PIBpercapita);

    // Exibindo CARTA 02
    printf("\n-------------------------------- CARTA 2 --------------------------------------------\n");
    printf("Estado: %s\n", estadodacidade2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área : %.2f Km²\n", area2);
    printf("PIB : %.2f Bilhões R$\n", PIB2);
    printf("Número de Pontos turisticos: %d\n", pontosturisticos2);
    printf("A densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("O PIB per capita: %.2f reais\n", PIBpercapita2);

    return 0;
}
