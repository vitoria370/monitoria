#include <stdio.h>
#include <string.h>
 int main()
 {
     char vetor[5][10]={"zero","um","dois","tres","quatro"};
     int valor;
     for(int i =0; i < 5; i++)
     {
         printf("%d. %s\n",i,vetor[i]);
     }
     scanf("%d",&valor);
printf("%s\n",vetor[valor]);
     return 0;
 }