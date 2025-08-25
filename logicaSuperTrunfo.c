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

    // Comparações de cartas
    // Quem tem menor densidade vende a rodada

    printf("\n\nComparação de Cartas:\n");

    //Variaveis para armazenar o valor e fazer as comparações e usar para a soma

    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // menu para o primeiro atributo
    printf("\n=== Escolha o PRIMEIRO atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // menu do segundo atributo
    printf("\n=== Escolha o SEGUNDO atributo para comparação (diferente do primeiro) ===\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    // Verificar se a opção 2 é válida
    if (opcao1 == opcao2 || opcao2 < 1 || opcao2 > 5) {
        printf("\nErro: Os atributos devem ser diferentes e válidos (1 a 5). Encerrando comparação.\n");
        return 0;
    }

    // Função com switch para atribuir valores
    switch(opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = pontosTuristicos1;
            valor1_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor1_carta1 = densidadePopulacional1;
            valor1_carta2 = densidadePopulacional2;
            break;
    }

    switch(opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = pontosTuristicos1;
            valor2_carta2 = pontosTuristicos2;
            break;
        case 5:
            valor2_carta1 = densidadePopulacional1;
            valor2_carta2 = densidadePopulacional2;
            break;
    }

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos resultados
    char *nomeAtr1 = (opcao1 == 1) ? "População" :
                     (opcao1 == 2) ? "Área" :
                     (opcao1 == 3) ? "PIB" :
                     (opcao1 == 4) ? "Pontos Turísticos" :
                                     "Densidade Populacional";

    char *nomeAtr2 = (opcao2 == 1) ? "População" :
                     (opcao2 == 2) ? "Área" :
                     (opcao2 == 3) ? "PIB" :
                     (opcao2 == 4) ? "Pontos Turísticos" :
                                     "Densidade Populacional";

    printf("\n===== COMPARAÇÃO =====\n");
    printf("Atributo 1 - %s:\n", nomeAtr1);
    printf("  %s: %.2f\n", nomeCidade1, valor1_carta1);
    printf("  %s: %.2f\n", nomeCidade2, valor1_carta2);

    printf("\nAtributo 2 - %s:\n", nomeAtr2);
    printf("  %s: %.2f\n", nomeCidade1, valor2_carta1);
    printf("  %s: %.2f\n", nomeCidade2, valor2_carta2);

    printf("\nSoma total dos atributos:\n");
    printf("  %s: %.2f\n", nomeCidade1, soma1);
    printf("  %s: %.2f\n", nomeCidade2, soma2);

    // Densidade menor vence com operador ternario
    float pontos1 = 0, pontos2 = 0;

    pontos1 += (opcao1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : 0) : (valor1_carta1 > valor1_carta2 ? 1 : 0);
    pontos2 += (opcao1 == 5) ? (valor1_carta2 < valor1_carta1 ? 1 : 0) : (valor1_carta2 > valor1_carta1 ? 1 : 0);

    pontos1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : 0) : (valor2_carta1 > valor2_carta2 ? 1 : 0);
    pontos2 += (opcao2 == 5) ? (valor2_carta2 < valor2_carta1 ? 1 : 0) : (valor2_carta2 > valor2_carta1 ? 1 : 0);

    //Print com resultados

    printf("\nResultado: ");
    if (soma1 > soma2) {
        printf("%s venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }
    return 0;
}