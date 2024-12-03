#include <stdio.h>
int main()
{
    int vetor[10] ={1,2,3,4,5,6,7,8,9,10};
    int valor;
    scanf("%d",&valor);
    for(int i = 0; i < 10; i++)
    {
        if(valor == vetor[i])
        {
            printf("numero digitado:%d\nnumero no vetor:%d",valor,vetor[i]);
        }
    }
    return 0;
}