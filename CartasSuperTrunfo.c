#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");
    char estado1[50], estado2[50];
    char codigo1[2], codigo2[2];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibPerCapta1, pibPerCapta2;


    printf("Informe nome do estado 1: \n");
    scanf("%s", &estado1);
    printf("Informe o codigo da cidade: \n");
    scanf("%s", &codigo1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome1);
    printf("Informe a população: \n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);
    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos1);
    densidade1 = (float)populacao1 / area1;
    pibPerCapta1 = pib1 / (float)populacao1;




    

    printf("Informe nome do estado 2: \n");
    scanf("%s", &estado2);
    printf("Informe o código da cidade: \n");
    scanf("%s", &codigo2);  
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome2);
    printf("Informe a população: \n");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);
    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d",&pontosturisticos2);
    densidade2 = (float)populacao2 / area2;
    pibPerCapta2 = pib2 / (float)populacao2;



    printf("\n\n=====Cartas Cadastradas=====");
    printf("\nEstado: %s\n",estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n",nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n ",pib1);
    printf("Número de pontos turísticos: %d\n",pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais\n",pibPerCapta1);

    printf("Estado: %s\n",estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Número de pontos turísticos: %d\n",pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais\n",pibPerCapta2);

    printf("\nPressione ENTER para encerrar o programa...\n");
    getchar();
    
    return 0;
}
