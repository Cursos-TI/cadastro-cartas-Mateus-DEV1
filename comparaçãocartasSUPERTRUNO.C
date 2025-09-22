#include <stdio.h>
//nivel novato
int main() {
    //declaracao/preenchimento
    // carta 1 - fortaleza
char estado1[20] = "ceara";
char codigo1[20] = "A01";
char cidade1[20] = "fortaleza";
int populacao1 = 2686612;
float area1 = 314.93;
float pib1 = 67000.50;
int pontos1 = 15;

//carta 2 - recife
char estado2[20] = "pernambuco";
char codigo2[20] = "B02";
char cidade2[20] = "recife";
int populacao2 = 1653461;
float area2 = 218.44;
float pib2 = 88000.75;
int pontos2 = 20;

// calculos extras
//densidade populacional = populacao/ area/ (resultado float)
float densidade1 = populacao1 / area1;
float densidade2 = populacao2 / area2;
//PIB per capita = pib / populacao (resultado float)
float pibCapita1 = pib1 / populacao1;
float pibCapita2 = pib2 / populacao2;

// exibindo cartas
printf("\n===== carta 1 =====\n");
// ordem e especificadores: %s (string), %d (int), %.2f (float com duas casas)
printf("%s - %s - %d - %s\n", estado1 , codigo1, populacao1, cidade1);
printf("populacao: %d\n", populacao1);
printf("area: %.2f km2\n", area1);
printf("PIB: %.2f\n", pib1);
printf("pontos turisticos: %d\n", pontos1);
printf("densidade populacional: %.2f\n", densidade1);
printf("PIB per capita: %.6f\n", pibCapita1); //mais casas por ser valor pequeno

printf("\n===== cartas 2 =====\n");
printf("%s - %s - %d - %s\n", estado2, codigo2, populacao2, cidade2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f km2\n", area2);
printf("PIB: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontos2);
printf("densidade populacional: %.2f\n", densidade2);
printf("PIB per capita: %.6f\n", pibCapita2);

// menu: escolher atributo
int escolha;
printf("\nEscolha o atributo para comparar:\n");
printf("1 - populacao\n");
printf("2 - area\n");
printf("3 - PIB\n");
printf("4 - densidade populacional\n");
printf("5 - PIB per capita\n");
printf(" sua escolha: ");
scanf("%d", &escolha); // leia numero (1..5) digite '1', nao "populacao"

// comparacao (com chaves corretas) - para densidade => menor vence, para outros => maior vence
if (escolha == 1) {
    printf("\nComparando populacao...\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu! (%d vs %d)\n", populacao1, populacao2);
    } else {
        printf("Carta 2 venceu! (%d vs %d)\n", populacao2, populacao1);
} 
} else if (escolha == 2){
    printf("\nComparando area...\n");
    if (area1 > area2) {
        printf("Carta 1 venceu! (%.2f vs %.2f)\n", area1, area2);
    } else {
        printf("Carta 2 venceu! (%.2f vs %.2f)\n", area2, area1);
    }
} else if (escolha == 3) {
        printf("\nComparando PIB...\n");
        if (pib1 > pib2) {
         printf("Carta 1 venceu! (%.2f vs %.2f)\n", pib1, pib2);
        } else {
        printf("Carta 2 venceu! (%.2f vc %.2f)\n", pib2, pib1);
        }
        
    } else if (escolha == 4){
        printf("\nComparando densidade populacional...\n");
        if (densidade1 < densidade2) { // menor vence
            printf("Carta 1 venceu! (%.2f vs %.2f)\n", densidade1, densidade2);
        } else {
            printf("Carta 2 venceu! (%.2f vs %.2f)\n", densidade2, densidade1);
        }
    } else if (escolha == 5) {
        printf("\nComparando PIB per capita...\n");
        if (pibCapita1 > pibCapita2) {
            printf("Carta 1 venceu! (%.6f vs %.6f)\n", pibCapita1, pibCapita2);
        } else
        {
            printf("carta 2 venceu! (%.6f vs %.6f)\n", pibCapita2, pibCapita1);
        } 
        } else
        {
            printf("Opcao invalida!\n");
        }
        
        
    
        
    
    return 0;


}