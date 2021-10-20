#include<stdio.h>
int main(){
    char cadena[4][5] = {"Holaa","Comoo","Estas","Perla"};
    
    for(int j = 0; j<4; j++){
        for(int i = 0; i<5;i++)
            printf("%c",cadena[j][i]);
        printf("\n");
    }
        
   
        
return 0;
}