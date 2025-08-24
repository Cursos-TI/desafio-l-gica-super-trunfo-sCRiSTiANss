#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Variáveis da primeira carta
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2[50];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Os pedidos do terminal são exibidos pelo printf e são coletadas as informações pelo scanf
    // A solicitação da população não poderá ser preenchida com pontos em meio aos números pelo usuário, pois sua variável é int
    // Os nomes não poderão conter espaço
    // Conforme os prints solicitam, o usuário insere as informações para preeencher as variáveis solicitadas no terminal

    // Dados da carta 1

    printf("Digite o estado da primeira carta(sem espaço ex:MinasGerais): \n");
    scanf("%s", &estado1);

    printf("Digite código primeira carta(ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade(sem espaço ex:JuizDeFora): \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população da cidade(obs: sem pontos): \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km² ex:123.67): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade(ex:123.67): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Variaveis densidade populacional e pib per capita da carta 1

    float densidadePopulacional1 = populacao1 / area1;
    float pibPercapita1 = pib1 / populacao1;

    // Dados da carta 2

    printf("Digite o estado da segunda carta(sem espaço ex:MinasGerais): \n");
    scanf("%s", &estado2);

    printf("Digite código segunda carta(ex: A01): \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade(sem espaço ex:JuizDeFora): \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da cidade(obs: sem pontos): \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km² ex:123.67): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade(ex:123.67): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Variaveis densidade populacional e pib per capita da carta 2

    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapita2 = pib2 / populacao2;

    //Inverso da densidade e o super poder da carta 1 e 2

    float inversoDensidade1 = area1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPercapita1 + inversoDensidade1;

    float inversoDensidade2 = area2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPercapita2 + inversoDensidade2;

    // Exibição dos Dados das Cartas:
    // A exibição das cartas é exibida pelo printf de forma organizada, linha por linha
    // A exibição das cartas esta na seguinte ordem: estado, código, nome da cidade, população, área, PIB, número de pontos turísticos, Densidade Populacional, PIB per capita e super poder

    // Print da primeira carta

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Print da segunda carta
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações de cartas If Else
    // Quem tem menor densidade vende a rodada

    printf("\n\nComparação de Cartas:\n");

    printf("Atributo: População\n");
    printf("Carta 1 - %s: %d \n", nomeCidade1, populacao1 );
    printf("Carta 2 - %s: %d \n", nomeCidade2, populacao2 );
    if (populacao1 > populacao2) {
        printf("Cidade da carta 1 tem maior população. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior população. Venceu! \n\n");
    }
    
    printf("Atributo: Área\n");
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, area1 );
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, area2 );
    if (area1 > area2) {
        printf("Cidade da carta 1 tem maior área. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior área. Venceu! \n\n");
    }

    printf("Atributo: PIB\n");
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, pib1 );
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, pib2 );
    if (pib1 > pib2) {
        printf("Cidade da carta 1 tem maior PIB. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior PIB. Venceu! \n\n");
    }

    printf("Atributo: Pontos Turisticos\n");
    printf("Carta 1 - %s: %d \n", nomeCidade1, pontosTuristicos1 );
    printf("Carta 2 - %s: %d \n", nomeCidade2, pontosTuristicos2 );
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade da carta 1 tem maior Pontos Turistico. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior Pontos Turisticos. Venceu! \n\n");
    }

    printf("Atributo: Densidade Populacional\n");
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, densidadePopulacional1);
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Cidade da carta 1 tem menor Densidade Populacional. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem menor Densidade Populacional. Venceu! \n\n");
    }
    
    printf("Atributo: PIB per Capita\n");
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, pibPercapita1 );
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, pibPercapita2 );
    if (pibPercapita1 > pibPercapita2) {
        printf("Cidade da carta 1 tem maior PIB per Capita. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior PIB per Capita. Venceu! \n\n");
    }
    
    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s: %.2f \n", nomeCidade1, superPoder1);
    printf("Carta 2 - %s: %.2f \n", nomeCidade2, superPoder2 );
    if (superPoder1 > superPoder2) {
        printf("Cidade da carta 1 tem maior Super Poder. Venceu! \n\n");
    }else{
        printf("Cidade da carta 2 tem maior Super Poder. Venceu! \n\n");
    }

    return 0;
}
