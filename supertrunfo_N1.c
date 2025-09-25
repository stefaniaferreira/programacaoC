#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char estado01 [50], estado02 [50];
    char codigo01 [50], codigo02 [50];
    char nome01 [50], nome02 [50];
    int habitantes01, habitantes02;
    float area01, area02;
    float PIB01, PIB02;
    int numero01, numero02;


    printf("Digite uma letra de 'A' a 'H' representando um dos oito Estados: \n");
    scanf("%s", &estado01);

    printf("Digite a letra do estado seguida de um número de 01 a 04 : \n");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome01);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes01);

    printf("Digite a área da cidade em km: \n");
    scanf("%f", &area01);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB01);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numero01);

    printf("Carta 1:\n");

    printf("Estado: %s\n", estado01);

    printf("Código do Estado: %s\n", codigo01);

    printf("Nome da Cidade: %s\n", nome01);

    printf("População: %d\n", habitantes01);

    printf("Área: %.2fkm²\n", area01);

    printf("PIB: R$%.2f\n", PIB01);

    printf("Número de pontos turísticos: %d\n", numero01);

    printf("Digite uma letra de 'A' a 'H' representando um dos oito Estados: \n");
    scanf("%s", &estado02);

    printf("Digite a letra do estado seguida de um número de 01 a 04 : \n");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome02);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &habitantes02);

    printf("Digite a área da cidade em km: \n");
    scanf("%f", &area02);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &PIB02);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numero02);

    printf("Carta 2:\n");

    printf("Estado: %s\n", estado02);

    printf("Código do Estado: %s\n", codigo02);

    printf("Nome da Cidade: %s\n", nome02);

    printf("População: %d\n", habitantes02);

    printf("Área: %.2fkm²\n", area02);

    printf("PIB: R$%.2f\n", PIB02);

    printf("Número de pontos turísticos: %d\n", numero02);

    return 0;
}

// Progarama para cadastrar cartas de Super Trunfo com atributos de cidades brasileiras.




