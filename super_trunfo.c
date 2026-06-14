#include <stdio.h>

int main() {

char estado1[20],codigo1[10],cidade1[20];
int populacao1, pontos_turisticos1;
float area1, pib1;

char estado2[20], codigo2[10], cidade2[20];
int populacao2, pontos_turisticos2;
float area2, pib2;


// Mensagem de boas-vindas e instruções para os jogadores

printf("Bem-vindo ao Super Trunfo de Cidades!\n");
printf("\n");

printf("Vamos começar!\n");
printf("\n");

printf("Jogador 1, faça suas escolhas!\n");
printf("\n");

//Escolhas do jogador 1

printf("Escolha a sua carta (De '1' a '4'): ");
scanf("%s",codigo1);

printf("Escolha o estado (De 'A' a 'H'): ");
scanf("%s",estado1);

printf("Qual o nome da sua cidade: ");
scanf("%s",cidade1);

printf("Digite a população: ");
scanf("%d",&populacao1);

printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%d",&pontos_turisticos1);

printf("Digite a área da sua cidade: ");
scanf("%f",&area1);

printf("Digite o PIB (Produto Interno Bruto da cidade): ");
scanf("%f",&pib1);

printf("\n");

//Escolhas do jogador 2

printf("Jogador 2, agora é a sua vez de fazer suas escolhas!\n");
printf("\n");

printf("Escolha a sua carta (De '1' a '4'): ");
scanf("%s",codigo2);

printf("Escolha o estado (De 'A' a 'H'): ");
scanf("%s",estado2);

printf("Qual o nome da sua cidade: ");
scanf("%s",cidade2);

printf("Digite a população: ");
scanf("%d",&populacao2);

printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%d",&pontos_turisticos2);

printf("Digite a área da sua cidade: ");
scanf("%f",&area2);

printf("Digite o PIB (Produto Interno Bruto da cidade): ");
scanf("%f",&pib2);

printf("\n");

printf("Carta 1: \n");
printf("Estado: %s\n",estado1);
printf("Código: %s0%s\n",estado1,codigo1);
printf("Nome da Cidade: %s\n",cidade1);
printf("População: %d\n",populacao1);
printf("Pontos Turísticos: %d\n",pontos_turisticos1);
printf("Área (km²): %.2f km²\n",area1);
printf("PIB: R$ %.2f bilhões de reais\n",pib1);  

printf("\n");

printf("Carta 2: \n");
printf("Estado: %s\n",estado2);
printf("Código: %s0%s\n",estado2,codigo2);
printf("Nome da Cidade: %s\n",cidade2);
printf("População: %d\n",populacao2);
printf("Pontos Turísticos: %d\n",pontos_turisticos2);
printf("Área (km²): %.2f km²\n",area2);
printf("PIB: R$ %.2f bilhões de reais \n",pib2); 

return 0;
}