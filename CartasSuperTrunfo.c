#include <stdio.h>

int main(){

// VÁRIAVEIS CARTA 1
unsigned long int Populacao1; 
int Npontosturisticos1;
float Area1, Pib1, DensidadePopu1, PibpCapita1, SuperPoder1;
char Pais1[50], Estado1[50], Codigo1[50], Cidade1[50];

// VÁRIAVEIS CARTA 2
unsigned long int Populacao2; 
int Npontosturisticos2;
float Area2, Pib2, DensidadePopu2, PibpCapita2, SuperPoder2;
char Pais2[50], Estado2[50], Codigo2[50], Cidade2[50];

// VÁRIAVEL DO RESULTADO DAS COMPARAÇÕES
int RCpopulacao, RCarea, RCpib, RCpturisticos, RCdpopulacional, RCppcapita, RCsuperpoder;

//CADASTRO CARTA 1 
printf ("### CADASTRO CARTA 1 ###\n\n");
printf ("Digite um País: \n");
scanf ("%s", Pais1);
printf ("Digite um estado: \n");
scanf ("%s", Estado1);
printf ("Digite um código para carta: \n");
printf ("Exemplo: (A01) \n");
scanf ("%s", Codigo1);
printf ("Digite Um nome de uma cidade do estado que escolheu: \n");
scanf ("%s", Cidade1);
printf ("Digite a população desta cidade (Nº): \n");
scanf ("%lu", &Populacao1);
printf ("Digite a Área dessa cidade (Nº): \n");
scanf ("%f", &Area1);
printf ("Digite o PIB dessa cidade (Nº): \n");
scanf ("%f", &Pib1);
printf ("Digite o Nº de Pontos turísticos dessa cidade (Nº): \n");
scanf ("%d", &Npontosturisticos1);

//cálculo após receber os valores das váriaveis 
DensidadePopu1 = (float)Populacao1 / Area1; //Cálculo Densidade Populacional carta 1= População / area; 
PibpCapita1 =  Pib1 / (float)Populacao1; // Cálculo PIB per Capita carta 1 = PIB / População;

SuperPoder1 = (float)Populacao1 + Area1 + Pib1 + (float)Npontosturisticos1 + PibpCapita1 + (1.0 / DensidadePopu1);

//CADASTRO CARTA 2
printf ("\n\n### CADASTRO CARTA 2 ###\n\n");
printf ("Digite um Pais: \n");
scanf ("%s", Pais2);
printf ("Digite um estado: \n");
scanf ("%s", Estado2);
printf ("Digite um código para carta: \n");
printf ("Exemplo: (A02) \n");
scanf ("%s", Codigo2);
printf ("Digite Um nome de uma cidade do estado que escolheu: \n");
scanf ("%s", Cidade2);
printf ("Digite a população desta cidade (Nº): \n");
scanf ("%lu", &Populacao2);
printf ("Digite a Área dessa cidade (Nº): \n");
scanf ("%f", &Area2);
printf ("Digite o PIB dessa cidade (Nº): \n");
scanf ("%f", &Pib2);
printf ("Digite o Nº de Pontos turísticos dessa cidade: \n");
scanf ("%d", &Npontosturisticos2);

//cálculo após receber os valores das variaveis
DensidadePopu2 = (float)Populacao2 / Area2;  //Cálculo Densidade Populacional carta 2 = População / area; 
PibpCapita2 = Pib2 / (float)Populacao2; // Cálculo PIB per Capita carta 2 = PIB / População; 

SuperPoder2 = (float)Populacao2 + Area2 + Pib2 + (float)Npontosturisticos2 + PibpCapita2 + (1.0f / DensidadePopu2); //UTILIZADO 1.0F para forçar um resultado mais preciso em float e inverso

//COMPARAÇÕES CARTAS
RCpopulacao = Populacao1 > Populacao2;
RCarea = Area1 > Area2;
RCpib = Pib1 > Pib2;
RCpturisticos = Npontosturisticos1 > Npontosturisticos2;
RCdpopulacional = DensidadePopu1 < DensidadePopu2; // NESSE CASO VENCE A DENSIDADE MENOR PORISSO A COMPARAÇÃO MENOR QUE E NÃO MAIOR QUE
RCppcapita = PibpCapita1 > PibpCapita2;
RCsuperpoder = SuperPoder1 > SuperPoder2;

//RESULTADO DO CADASTRO DA CARTA 1
printf ("\n## CARTA 1 ##\n\n");
printf ("País: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\n", Pais1, Estado1, Codigo1, Cidade1, Populacao1);
printf ("Área: %.2f Km²\nPIB: %.2f Bilhões de reais\n", Area1, Pib1);
printf ("Nº Pontos Turísticos: %d\n", Npontosturisticos1);
printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopu1);
printf ("PIB per Capita: %.2f reais\n", PibpCapita1);

//RESULTADO DO CADASTRO DA CARTA 2
printf ("\n## CARTA 2 ##\n\n");
printf ("País: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %lu\n", Pais2, Estado2, Codigo2, Cidade2, Populacao2);
printf ("Área: %.2f Km²\nPIB: %.2f Bilhões de reais\n", Area2, Pib2);
printf ("Nº Pontos Turísticos: %d\n", Npontosturisticos2);
printf ("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", DensidadePopu2, PibpCapita2);

//RESULTADO COMPARAÇÕES DAS CARTAS
//VAI PRINTAR: O ATRIBUTO = QUAL CARTA VENCE E O RESULTADO DA COMPARAÇÃO SE VERDADEIRO (1) OU FALTO (0) 
printf ("### RESULTADO COMPARAÇÕES DAS CARTAS ### \n");
printf ("      ### CARTA 1 X CARTA 2 ### \n\n");
printf ("População = Carta %d venceu (%d)\n", RCpopulacao ? 1 : 2, RCpopulacao);
printf ("Área = Carta %d venceu (%d)\n", RCarea ? 1 : 2, RCarea);
printf ("PIB = Carta %d venceu (%d)\n", RCpib ? 1 : 2, RCpib);
printf ("Nº de Pontos Turísticos = Carta %d venceu (%d)\n", RCpturisticos ? 1 : 2, RCpturisticos);
printf ("Densidade Populacional = Carta %d venceu (%d)\n", RCdpopulacional ? 1: 2, RCdpopulacional);
printf ("PIB per Capita = Carta %d venceu (%d)\n", RCppcapita ? 1 : 2, RCppcapita);
printf ("Super Poder = Carta %d venceu (%d)\n", RCsuperpoder ? 1 : 2, RCsuperpoder);

//PESQUISEI UM METODO PARA MOSTRAR QUAL CARTA VENCE SEM UTILIZAR O " IF e ELSE"
//UTILIZADO A EXPRESSÃO TERNÁRIA ? 1 : 2
//QUANDO O RESULTADO DA COMPARAÇÃO FOR VERDADEIRA (1) VAI PRINTAR 1 = CARTA 1
//QUANDO O RESULTADO DA COMPARAÇÃO FOR FALSA (0) VAI PRINTAR 2 = CARTA 2 

return 0;

}