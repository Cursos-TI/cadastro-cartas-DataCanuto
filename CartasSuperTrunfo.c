#include <stdio.h>

int main(){
    //Incialização de variáveis
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    long populacao1, populacao2;
    double area1, area2;
    double pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    double densidade1, densidade2;
    double pibPerCapta1, pibPerCapta2;
    double superPoder1, superPoder2;
    int resultPopulacao, resultArea, resultPib, resultPontos, resultDnsidade, resultPibPerCapita, resultSuperPoder;

    //Entrada de dados Carta 1
    printf("Informe nome do estado 1: \n");
    scanf("%s", estado1);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome1);
    printf("Informe a população: \n");
    scanf("%ld", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%lf", &area1);
    printf("Informe o pib da cidade: \n");
    scanf("%lf", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos1);
    densidade1 = (double)populacao1 / area1;
    pibPerCapta1 = (pib1 * 1e9) / populacao1;
    superPoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 - densidade1 + pibPerCapta1);



    //Entrada de dados carta 2
    printf("Informe nome do estado 2: \n");
    scanf("%s", estado2);
    printf("Informe o código da cidade: \n");
    scanf("%s", codigo2);  
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Informe a população: \n");
    scanf("%ld", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%lf", &area2);
    printf("Informe o pib da cidade: \n");
    scanf("%lf", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos2);
    densidade2 = (double)populacao2 / area2;
    pibPerCapta2 = (pib2 * 1e9) / populacao2;
    superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 - densidade2 + pibPerCapta2);

    //Saida de dados
    printf("\n\n=====Cartas Cadastradas=====\n");
    printf("\nCarta 1\n");
    printf("\nEstado: %s\n",estado1);
    printf("Código: %s%s\n",estado1, codigo1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2lf Km²\n",area1);
    printf("PIB: %.2lf bilhões de reais\n ",pib1);
    printf("Número de pontos turísticos: %d\n",pontosturisticos1);
    printf("Densidade Populacional: %.2lf hab/km²\n",densidade1);
    printf("PIB per Capita: %.2lf reais\n",pibPerCapta1);
    printf("Super Poder: %.2lf",superPoder1);

    printf("\n\nCarta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Código: %s%s\n",estado2, codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2lf Km²\n",area2);
    printf("PIB: %.2lf bilhões de reais\n",pib2);
    printf("Número de pontos turísticos: %d\n",pontosturisticos2);
    printf("Densidade Populacional: %.2lf hab/km²\n",densidade2);
    printf("PIB per Capita: %.2lf reais\n",pibPerCapta2);
    printf("Super Poder: %.2lf",superPoder2);

    //Atribuição de valores 1 ou 0 para o resultado da competição
    resultPopulacao = populacao1 > populacao2;
    resultArea = area1 > area2;
    resultPib = pib1 > pib2;
    resultPontos = pontosturisticos1 > pontosturisticos2;
    resultDnsidade = densidade1 < densidade2;
    resultPibPerCapita = pibPerCapta1 > pibPerCapta2;
    resultSuperPoder = superPoder1 > superPoder2;

    printf("\n===Comparação entre cartas===\n\n");
    
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacional: %d\nPIB per Capita: %d\nSuper Poder: %d\n",resultPopulacao,resultArea,resultPib,resultPontos,resultDnsidade,resultPibPerCapita,resultSuperPoder);

    printf("\nPressione ENTER para encerrar o programa...\n");

    
    return 0;
}
