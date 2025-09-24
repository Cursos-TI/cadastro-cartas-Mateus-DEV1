#include <stdio.h>

int main() {

//carta 1 brasil

char nome1[] = "brasil";
int populacao1 = 21400000;
float area1 = 8516000.0;
float pib1 = 22000.0;
int pontosturisticos1 = 50;

// Carta 2 - argentina
char nome2[] = "argentina";
int populacao2 = 46000000;
float area2 = 2780000.0;
float pib2 = 640.0;
int pontosturisticos2 = 30;

//calculo de atributos derivados

// densidade demográfica = populacao/area

float densidade1 = (float) populacao1 / area1;
float densidade2 = (float) populacao2 / area2;

//PIB per capita = PIB 
float pibpercapita1 = pib1 * 1000000000 / populacao1;
float pibpercapita2 = pib2 * 1000000000 / populacao2;

int escolha; //variavel que aguarda a opção escolhida no menu:

// menu interativo para o jogador

printf("Escolha o atributo para comparar\n");
printf("1 - população\n");
printf("2 - área\n");
printf("3 - PIB\n");
printf("4 - pontos turisticos\n");
printf("5 - densidade demografica\n");
printf("6 -PIB per capita\n");
printf("Digite sua escolha: ");
scanf("%d", &escolha);

//mostrar paises que estão sendo comparados

printf("\nComparando %s x %s...\n", nome1, nome2);

//estrutura switch para tratar a comparação:

switch (escolha) {
case 1: 
    printf("População: %s = %d | %s = %d\n", nome1, populacao1, nome2, populacao2);
     if (populacao1 > populacao2)
     {
    printf("vencedor: %s\n", nome1);
     } else if (populacao2 > populacao1)
     {
        printf("vencedor: %s\n", nome2);
     } else {
        printf("Empate!\n");
     }
     break;

     case 2: //área
     printf("Área: %s = %.2f km² | %s = %.2f km²\n", nome1, area1, nome2, area2);
     if (area1 > area2) {
        printf("Vencedor: %s\n", nome1);
     } else if (area2 > area1) {
        printf("Vencedor: %s\n", nome2);
     } else {
        printf("Empate!\n"); 
     }
     break;
     
    case 3: //PIB
    printf("PIB: %s = %.2f bilhoes | %s = %.2f bilhoes\n", nome1, pib1, nome2, pib2);
      if (pib1 > pib2) {
        printf("Vencedor: %s\n", nome1);
      } else if (pib2 > pib1) {
        printf("Vencedor: %s\n", nome2);
      } else {
     printf("Empate!\n");
      }
      break;

      case 4: //pontos turisticos
      printf("Pontos turisticos: %s = %d | %s = %d\n", nome1, pontosturisticos1, nome2, pontosturisticos2);
      if (pontosturisticos1 > pontosturisticos2) {
        printf("Vencedor: %s\n", nome1);
      } else if (pontosturisticos2 > pontosturisticos1) {
        printf("Vencedor: %s\n", nome2);
      } else {
        printf("Empate!\n");
      }
       break;
       case 5: // densidade demografica: (menor vence)
       printf("Densidade demografica: %s = %.5f hab/km² | %s = %.5f hab/km²\n", nome1, densidade1, nome2, densidade2);
       if (densidade1 < densidade2) {
         printf("Vencedor: %s (menor densidade)\n", nome1);
       } else if (densidade2 < densidade1) {
         printf("Vencedor: %s (menor densidade)\n", nome2);
       } else {
      printf("Empate!\n");
       }
       break;
       
       case 6: //PIB per capita
       printf("PIB per capita: %s = %.2f USD/hab | %s = %.2f USD/hab\n", nome1, pibpercapita1, nome2, pibpercapita2);
       if (pibpercapita1 > pibpercapita2) {
         printf("Vencedor: %s\n", nome1);
       } else if (pibpercapita2 > pibpercapita1) {
         printf("Vencedor: %s\n", nome2);
       } else {
         printf("Empate!\n");
       }
       break;
       
       default:
       printf("Opção invalida!\n");
      }

      return 0; //fim do programa
       
}