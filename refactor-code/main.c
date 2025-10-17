#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number, option;
   printf("Digite um numero: ");
   scanf(" %d", &number);
   printf("Digite 1 para usar a recursividade e 2 para iteratividade: ");
   scanf(" %d", &option);

   /*
    VALID OPTIONS: 
        1 = recursion;
        2 = iteration;
        else = invalid option;
    */
   switch(option) {
       case 1:
           printf("Resultado usando RECURSIVIDADE: %d", recursive(number));
           break;
       case 2:
           printf("Resultado usando ITERATIVIDADE: %d", iterative(number));
           break;
       default:
           printf("Escolha invalida.");
   }

    printf("\n\n");
    system("pause");
    return 0;
}