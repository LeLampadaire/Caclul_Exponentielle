#include <stdio.h>
#include <stdlib.h>

float Calcul_expo(int, int);

int main(){
    int x=1, k=0;
    float e=0;

    do{
        printf("Encodez x : ");
        fflush(stdin);
        scanf("%d",&x);
    }while(x <= 0);

    do{
        printf("Encodez k : ");
        fflush(stdin);
        scanf("%d",&k);
    }while(k <= 0);

    e = Calcul_expo(x, k);
    printf("\n-> L'exponentielle : %.2f.",e);

    return 0;
}

float Calcul_expo(int x, int k){
    float e=1;
    int i=1, tempox=x, tempoxMultiple, fact=1, tempoFact=1;

    while(i <= k){
        tempoxMultiple = 1;
        x = tempox;
        while(tempoxMultiple < i){
            x = x * tempox;
            tempoxMultiple++;
        }
        fact = fact * tempoFact;
        tempoFact++;
        e = e + ((float)x/(float)fact);
        i++;
    }

    return e;
}
