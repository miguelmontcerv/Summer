#include<stdio.h>
int main(){
    char c = 'a';
    char limite;
    int i,j,k;
    
    scanf("%c",&limite);
    for(i=0; c+i != limite; i++);
    limite = i;
    for(j=0; j<=limite ; j++){
        for(k=0; k<=i; k++)
            printf("%c",c+k);
        i--;
        printf("\n");
    }
return 0;
}