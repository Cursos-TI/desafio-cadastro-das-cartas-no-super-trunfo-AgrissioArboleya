#include <stdio.h>

int main(){

// VARIAVEIS CARTA 1
int Populacao1;
int Npontosturisticos1;
float Area1;
float Pib1;
char Pais1[50];
char Estado1[50];
char Codigo1[50];
char Cidade1[50];

// VARIAVEIS CARTA 2
int Populacao2;
int Npontosturisticos2;
float Area2;
float Pib2;
char Pais2[50];
char Estado2[50];
char Codigo2[50];
char Cidade2[50];

//CADASTRO CARTA 1 
printf ("### CADASTRO CARTA 1 ###\n\n");
printf ("Digite um Pais: \n");
scanf ("%s", Pais1);
printf ("Digite um estado: \n");
scanf ("%s", Estado1);
printf ("Digite um código para carta: \n");
printf ("Exemplo: (A01) \n");
scanf ("%s", Codigo1);
printf ("Digite Um nome de uma cidade do estado que escolheu: \n");
scanf ("%s", Cidade1);
printf ("Digite a população desta cidade (Nº): \n");
scanf ("%d", &Populacao1);
printf ("Digite a Área dessa cidade (Nº): \n");
scanf ("%f", &Area1);
printf ("Digite o PIB dessa cidade (Nº): \n");
scanf ("%f", &Pib1);
printf ("Digite o Nº de Pontos turísticos dessa cidade (Nº): \n");
scanf ("%d", &Npontosturisticos1);
//RESULTADO DO CADASTRO DA CARTA 1
printf ("\n## CARTA 1 ##\n\nPais: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNº Pontos Turisticos: %d\n", Pais1, Estado1, Codigo1, Cidade1, Populacao1, Area1, Pib1, Npontosturisticos1);

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
scanf ("%d", &Populacao2);
printf ("Digite a Área dessa cidade (Nº): \n");
scanf ("%f", &Area2);
printf ("Digite o PIB dessa cidade (Nº): \n");
scanf ("%f", &Pib2);
printf ("Digite o Nº de Pontos turísticos dessa cidade: \n");
scanf ("%d", &Npontosturisticos2);

//RESULTADO DO CADASTRO DA CARTA 2
printf ("\n## CARTA 2 ##\n\nPais: %s\nEstado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNº Pontos Turisticos: %d\n", Pais2, Estado2, Codigo2, Cidade2, Populacao2, Area2, Pib2, Npontosturisticos2);

    return 0;

}