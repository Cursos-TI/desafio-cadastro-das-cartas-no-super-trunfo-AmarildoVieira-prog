#include <stdio.h>


int main() {
    
    //declarar as variaveis
    int populacao1,populacao2,pontot1,pontot2;
    float pib1,pib2,area1,area2;
    char estado1[20],estado2[20],cidade1[20],cidade2[20],codigo1[20],codigo2[20];
    
    //introdução ao jogo e cadastramento dos atributos da carta 1
    printf("BEM VINDO AO JOGO SUPER TRUNFO\n");
    printf("Vamos criar a primeira carta\n");
    printf("\n");

    printf("Informe o nome do estado: ");
    scanf("\n%s",&estado1);

    printf("Informe o código da carta: 'ex:A01':");
    scanf("\n%s",&codigo1);

    printf("Informe o nome da cidade:");
    scanf("\n%s",&cidade1);

    printf("Informe a população:");
    scanf("\n%d",&populacao1);
    
    printf("Informe a area:");
    scanf("\n%f",&area1);
    
    printf("Informe o pib:");
    scanf("\n%f",&pib1);
    
    printf("Informe a quantidade de pontos turisticos:");
    scanf("\n%d",&pontot1);

    printf("\n");
    
   //cadastramento dos atributos da carta 2
   printf("Vamos criar a segunda carta\n");
   printf("\n");

   printf("Informe o nome do estado: ");
   scanf("\n%s",&estado2);

   printf("Informe o código da carta: 'ex:A01':");
   scanf("\n%s",&codigo2);

   printf("Informe o nome da cidade:");
   scanf("\n%s",&cidade2);

   printf("Informe a população:");
   scanf("\n%d",&populacao2);
   
   printf("Informe a area:");
   scanf("\n%f",&area2);
   
   printf("Informe o pib:");
   scanf("\n%f",&pib2);
   
   printf("Informe a quantidade de pontos turisticos:");
   scanf("\n%d",&pontot2);
  
   printf("\n");
    // Exibição dos dados da carta 1:

printf("ATRIBUTOS DA CARTA 1\n");
printf("ESTADO: %s\n",estado1);
printf("CÓDIGO: %s\n",codigo1);
printf("CIDADE: %s\n",cidade1);
printf("POPULAÇÃO: %d de habitantes\n",populacao1);
printf("AREA: %.2f KM²\n",area1);
printf("PIB: %.2f\n",pib1);
printf("PONTOS TURISTICOS: %d\n",pontot1);

printf("\n");
printf("\n");


//Exibição dos dados da carta 2:

printf("ATRIBUTOS DA CARTA 2\n");
printf("ESTADO: %s\n",estado2);
printf("CÓDIGO: %s\n",codigo2);
printf("CIDADE: %s\n",cidade2);
printf("POPULAÇÃO: %d de habitantes\n",populacao2);
printf("AREA: %.2f KM²\n",area2);
printf("PIB: %.2f\n",pib2);
printf("PONTOS TURISTICOS: %d\n",pontot2);





    return 0;
}
