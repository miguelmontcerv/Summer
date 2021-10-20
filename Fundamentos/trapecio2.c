#include<stdio.h>
int main()
{
    float a,b,n,dx,dx2,sumatoria = 0,respuesta;
    
    a = 0;
    b = 3;
    n = 5000000;

    dx = (b-a)/n;
    printf("dx: %.2f / 2\n",dx);
    

    for(float i = a; i <= b; i+= dx){
        if(i == a || i == b){
            sumatoria = sumatoria + (i*i*i); //por que la función es 1/x
            //printf("%.2f ",1/i);            
            //printf("i: %.2f ",i);
        }            
        else{
            sumatoria = sumatoria + 2*(i*i*i); //por que la función es 1/x
            //printf("%.2f ",2*(1/i));
        }
            
    }
    dx2 = dx/2;
    printf("\n%f * %f\n",dx2,sumatoria);
    
    respuesta = dx2 * sumatoria;

    printf("La integral de %.0f a %.0f de 1/x es: %.2f\n",a,b,respuesta);

    return 0;
}
