#include <stdio.h>
#include <string.h>

// estrutura que representa uma carta de pais
struct carta {
char nome[20];
int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade;
};

//estrutura que representa uma carta de pais//

int main() {
    //cadastro das cartas (já preenchidas com brasil e argentina)

struct carta brasil = {"brasil", 213, 8.5, 1.8, 50, 25.0};
struct carta argentina = {"argentina", 45, 2.7, 0.5, 30, 16.7};

//variavéis para armazenar escolhas e calculos
int atributo1, atributo2; 
//atributo escolhidos pelo jogador
float valor1_carta1, valor1_carta2; //valores do 1° atributo das cartas
float valor2_carta1, valor2_carta2; //valores do 2° atributo das cartas
float soma_carta1, soma_carta2; //soma final dos dois atributos

printf("=== super trunfo - brasil x argentina ===\n");
// menu para o jogador escolher atributos
printf("Escoçlha dois atributos diferentes para comparar:\n");
printf("1 - populacao\n");
printf("2 - area\n");
printf("3 - PIB\n");
printf("4 - pontos turisticos\n");
printf("5 - densidade demografica\n");

// jogador escolhe o primeiro atributo
printf("\nDigite o numero do primeiro atributo");
scanf("%d", &atributo1);

//jogador escolhe o segundo atributo ( nao pode ser igual ao primeiro atributo)
do
{
printf("Digite o numero do segundo atributo (diferente do primeiro): ");
scanf("%d", &atributo2);
if (atributo2 == atributo1) {
    printf("atributo repetido! Escolha outro.\n");
}

} while (atributo2 == atributo1); // força o jogador escolher diferente

// comparacao do primeiro atributo
switch (atributo1) {
case 1: //populacao
valor1_carta1 = brasil.populacao;
valor1_carta2 = argentina.populacao;
    break;

case 2: //area
valor1_carta1 = brasil.area;
valor1_carta2 = argentina.area;
break;

case 3: //PIB
valor1_carta1 = brasil.pib;
valor1_carta2 = argentina.pib;
break;

case 4: //pontos turisticos
valor1_carta1 = brasil.pontos_turisticos;
valor1_carta2 = argentina.pontos_turisticos;
break;

case 5: //densidade demografica (regra invertida - menor vence)
valor1_carta1 = brasil.densidade;
valor1_carta2 = argentina.densidade;
break;
default:
    printf("atributo invalido!\n");
    return 0;

}

//comparacao do segundo atributo

switch (atributo2) {
case 1:
    valor2_carta1 = brasil.populacao;
    valor2_carta2 = argentina.populacao;
    break;

case 2: //area
valor2_carta1 = brasil.area;
valor2_carta2 = argentina.area;
break;

case 3: //PIB
valor2_carta1 = brasil.pib;
valor2_carta2 = argentina.pib;
break;

case 4: // pontos turisticos
valor2_carta1 = brasil.pontos_turisticos;
valor2_carta2 = argentina.pontos_turisticos;
break;

case 5: //densidade demografica
valor2_carta1 = brasil.densidade;
valor2_carta2 = argentina.densidade;
break;
default:
printf("atributo invalido!\n");
return 0; 
}

//soma dos atributos
soma_carta1 = valor1_carta1 + valor2_carta1;
soma_carta2 = valor2_carta1 = valor2_carta2;

printf("\n=== resultado da comparacao ===\n");
printf("pais 1: %s\n", brasil.nome);
printf("pais 2: %s\n\n", argentina.nome);

printf("Atributo %d -> %s: %.2f | %s: %.2f\n", atributo1, brasil.nome, valor1_carta1, argentina.nome, valor1_carta2);
printf("Atributo %d -> %s: %.2f | %s: %.2f\n", atributo2, brasil.nome, valor2_carta1, argentina.nome, valor2_carta2);

printf("\nSoma dos atributos:\n");
printf("%s = %.2f\n", brasil.nome, soma_carta1);
printf("%s = %.2f\n", argentina.nome, soma_carta2);

//regras de vitoria com (if-else aninhados)
if (atributo1 == 5 || atributo2 == 5){
    //caso especial: se tiver densidade demografica a comparacao é invertida

if (soma_carta1 < soma_carta2) {
    printf("\nVencedor: %s\n", brasil.nome);
} else if (soma_carta2 < soma_carta1) {
    printf("\nVencedor: %s\n", argentina.nome);
} else {
 printf("\nEmpate!\n");
} 
    
} else {
 // caso normal: maior vence
 if (soma_carta1 > soma_carta2) {
 printf("\nVencedor: %s\n", brasil.nome);
} else if (soma_carta2 > soma_carta1)
{
 printf("\nVencedor: %s\n", argentina.nome);
}else {
    printf("\nEmpate!\n");
}


 return 0;
 

}
}
