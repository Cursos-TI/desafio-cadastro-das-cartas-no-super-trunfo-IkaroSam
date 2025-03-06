#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ikaro Moraes

int main() {
    char estado;
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int turiscos;

    printf("Digite a letra do estado:");
    scanf("%c", &estado);

    printf("Digite o codigo da carta:");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);
    
    printf("Digite a populacao:");
    scanf("%i", &populacao);

    printf("Digite a area da cidade:");
    scanf("%d", &area);

    printf("Digite o PIB:");
    scanf("%f", &PIB);

    printf("Digite quantidade pontos turisticos:");
    scanf("%i", &turiscos );

    printf("Carta 1:\nEstado: %c\ncodigo: %d\n", estado, codigo);
    printf("Nome da cidade: %d\nPopulaçao:%i\n", cidade, populacao);
    printf("Área: %d\nPIB: %f\nNúmero de Pontos turísticos: %f", area, PIB, turiscos);

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
