/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

   float nota_p1;
   printf("Sua nota na P1: ");
   scanf("%f", &nota_p1);
   
   float nota_p2;
   printf("Sua nota na P2: ");
   scanf("%f", &nota_p2);
   
   float nota_trabalho;
   printf("Sua nota no trabalho: ");
   scanf("%f", &nota_trabalho);
   
   float media_final;
   media_final = (nota_p1 * 0.3) + (nota_p2 * 0.4) + (nota_trabalho * 0.3);
   
   if (media_final >= 7) {
       printf("Você foi aprovado. Sua média final foi %f", media_final);
   } else {
       printf("Você foi reprovado. Sua média final foi %f", media_final);
   }


    return 0;
}