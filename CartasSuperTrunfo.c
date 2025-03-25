#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ikaro Moraes

typedef struct {
    char estado;            // Estado da carta (A a H)
    char codigo[5];         // Código da carta (exemplo: A01, B03)
    char cidade[100];       // Nome da cidade
    int populacao;          // População da cidade
    float area;             // Área da cidade em km²
    float pib;              // PIB da cidade
    int pontos_turisticos;  // Número de pontos turísticos na cidade
} CartaSuperTrunfo;

void exibirCarta(CartaSuperTrunfo carta) {
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontos_turisticos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;

    // Leitura da primeira carta
    printf("Digite as informações para a primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    getchar();  // Para consumir o caractere de nova linha deixado pelo scanf
    fgets(carta1.cidade, 100, stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0';  // Remove o '\n' do final da string
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura da segunda carta
    printf("\nDigite as informações para a segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    getchar();  // Para consumir o caractere de nova linha deixado pelo scanf
    fgets(carta2.cidade, 100, stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0';  // Remove o '\n' do final da string
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição das cartas
    printf("\n------ Carta 1 ------\n");
    exibirCarta(carta1);
    
    printf("\n------ Carta 2 ------\n");
    exibirCarta(carta2);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.




    return 0;
}
