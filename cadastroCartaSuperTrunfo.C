#include <stdio.h>

int main(){

//carta 1    
char estado1 [20] = "ceara";
char codigo1 [10] = "A01";
char cidade1 [20] = "fortaleza";
int populacao1 = 2686612;
float area1 = 314.93;
float pib1 = 67000.50;
int pontos1 = 15;

//carta 2
char estado2 [20] = "pernambuco";
char codigo2 [10] = "B02";
char cidade2 [20] = "recife";
int populacao2 = 1653461;
float area2 = 218.44;
float pib2 = 88000.75;
int pontos2 = 20;

//entrada carta 1
printf("\n===== cadastro da carta 1 =====\n");
 printf("estado: ");
 scanf("%s", estado1);
 printf("codigo: ");
 scanf("%s", codigo1);
 printf("cidade: ");
 scanf("%s", cidade1);
 printf("populacao: ");
 scanf("%d", &populacao1);
 printf("area (km2): ");
 scanf("%f", &area1);
 printf("pib: ");
 scanf("%f", &pib1);
 printf("pontos turisticos: ");
 scanf("%d", &pontos1);

 //entrada carta 2
printf("\n===== cadastro da carta 2 =====\n");
printf("estado: ");
scanf("%s", estado2);
printf("codigo: ");
scanf("%s", codigo2);
printf("cidade: ");
scanf("%s", cidade2);
printf("populacao: ");
scanf("%d", &populacao2);
printf("area (km2): ");
scanf("%f", &area2);
printf("pib: ");
scanf("%f", &pib2);
printf("pontos turisticos: ");
scanf("%d", &pontos2);

//exibindo as cartas
printf("\n===== carta 1 =====\n");
printf("estado: %s\n", estado1);
printf("codigo: %s\n", codigo1);
printf("cidade: %s\n", cidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f km2\n", area1);
printf("pib: %.2f\n", pib1);
printf("pontos turisticos: %d\n", pontos1);

printf("\n===== carta 2 =====\n");
printf("estado: %s\n", estado2);
printf("codigo: %s", codigo2);
printf("cidade: %s\n", cidade2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f km2\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontos2);


return 0;




}