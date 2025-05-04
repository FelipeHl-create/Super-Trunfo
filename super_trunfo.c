#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[20];
    char codigo[6];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    Carta carta1, carta2;
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;
    
    // Leitura dos dados da primeira carta
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-Z): ");
    scanf("%19s", carta1.estado);
    limparBuffer();

    printf("Digite o codigo da carta: ");
    scanf("%3s", carta1.codigo);
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf("%49[^\n]", carta1.cidade);
    limparBuffer();

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    limparBuffer();

    printf("Digite a area (km): ");
    scanf("%f", &carta1.area);
    limparBuffer();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    limparBuffer();

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    limparBuffer();

    // Leitura dos dados da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-Z): ");
    scanf("%19s", carta2.estado);
    limparBuffer();

    printf("Digite o codigo da carta: ");
    scanf("%3s", carta2.codigo);
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf("%49[^\n]", carta2.cidade);
    limparBuffer();

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    limparBuffer();

    printf("Digite a area (km): ");
    scanf("%f", &carta2.area);
    limparBuffer();

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    limparBuffer();

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    limparBuffer();

    // Calculando densidade populacional e PIB per capita
    densidadePop1 = carta1.populacao / carta1.area;
    densidadePop2 = carta2.populacao / carta2.area;
    
    pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao; // Convertendo PIB para reais
    pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    // Comparando as cartas usando a população como atributo
    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);
    
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // Exibindo informações calculadas
    printf("\nInformações extras:\n");
    printf("\nCarta 1 - %s:\n", carta1.cidade);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    
    printf("\nCarta 2 - %s:\n", carta2.cidade);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
