#include <stdio.h>

int main(){

   int a;
   printf("insira o valor de A: ");
   scanf("%i", &a);
   
   int b;
   printf("insira o valor de B: ");
   scanf("%i", &b);
   
   int c;
   printf("insira o valor de C: ");
   scanf("%i", &c);
   
   int media;
   media = (a + b + c) / 3;
   
   printf("A média dos valores é %i", media);


    return 0;
}