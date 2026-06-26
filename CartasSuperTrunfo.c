#include <stdio.h>
#include <string.h>

int main(){
    char estado1, estado2;
    char codigo1[1], codigo2[1];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;   

    //Entrada de dados para cadastrar carta 1
    printf("Carta 1");
    printf("Informe nome do estado 1: \n");
    scanf("%c", &estado1);
    getchar(); 
    printf("Informe o código da cidade: \n");
    scanf("%c", &codigo1);
    getchar();       
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome1);
    getchar();
    printf("Informe a população: \n");
    scanf("%d", &populacao1);
    getchar();
    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);
    getchar();
    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib1);
    getchar();
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos1);
    getchar();
    //Mensagem de confirmação para carta 1
    printf("Carta cadastrada com sucesso!\n");
    printf("Carta 1)";
    printf("Estado: %c\n",estado1);
    printf("Código: %c01\n", estado1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n",area1);
    printf("PIB: %f bilhões de reais\n ",pib1);
    printf("Número de pontos turísticos: %d\n",pontosturisticos1);

    //Entrada de dados para cadastrar carta 2
    printf("Informe nome do estado 2: \n");
    scanf("%c", &estado2);
    getchar();
    printf("Informe o código da cidade: \n");
    scanf("%c", &codigo1);
    getchar();   
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome2);
    getchar();
    printf("Informe a população: \n");
    scanf("%d", &populacao2);
    getchar();
    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);
    getchar();
    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib2);
    getchar();
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos2);
    getchar();
     //Mensagem de confirmação para carta 2
    printf("Carta cadastrada com sucesso!\n");
    printf("Carta 2)";
    printf("Estado: %c\n",estado2);
    printf("Código: %c01\n", codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n",area2);
    printf("PIB: %f bilhões de reais\n ",pib2);
    printf("Número de pontos turísticos: %d\n",pontosturisticos2);

    //Dados cadastrados

    printf("Cartas cadastradas: \n");

    printf("Carta 1\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %c01\n", estado1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km²\n",area1);
    printf("PIB: %f bilhões de reais\n ",pib1);
    printf("Número de pontos turísticos: %d\n",pontosturisticos1);
    printf("Carta 2\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %c02\n", estado2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km²\n",area2);
    printf("PIB: %f bilhões de reais\n",pib2);
    printf("Número de pontos turísticos: %d\n",pontosturisticos2);

    printf("\nPressione ENTER para encerrar o programa...\n");
    getchar();
    
    return 0;
}
