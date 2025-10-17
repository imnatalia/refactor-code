#include <stdio.h>
#include <stdlib.h>

//prototipos
int func(int n);
int func_it(int n);

int main()
{
    //n = numero; op = opcao;
   int n, op;
   printf("Digite um numero: ");
   scanf(" %d", &n);
   printf("Digite 1 para usar a recursividade e 2 para iteratividade: ");
   scanf(" %d", &op);

   //verificacao de escolha, se 1 = recursividade; se 2 = iteratividade; se != 1&2 = invalido;
   if(op == 1)
   {
       printf("Resultado usando RECURSIVIDADE: %d", func(n));
   }
   else if(op == 2)
   {
       printf("Resultado usando ITERATIVIDADE: %d", func_it(n));
   }
   else
   {
       printf("Escolha invalida.");
   }

    printf("\n\n");
    system("pause");
    return 0;

}

//função recursiva passada pelo professor, função soma n e todos os numeros anteriores (n - 1) até 0(caso base)
int func(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n + func(n-1));
}

//equivalente iterativo da função recursiva
int func_it(int n)
{
    int soma, i;
    for(i = n; i > 0; i--)
    {
        soma += i;
    }
    return soma;
}

