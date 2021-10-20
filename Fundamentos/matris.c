#include<stdio.h>
int main(){
    int limite1 = 10, limite2 = 4;

    int matrix[limite1][limite2];      
    
    int i,j;
    for(j = 0; j < 10; j++)
        for(i = 0; i < 4; i++)
            matrix[j][i] = i*j * 0.7;

     for(j = 0; j<10; j++){
        for(i = 0; i<4;i++)
            printf("%d ",matrix[j][i]);
        printf("\n");
    }

  return 0;
}