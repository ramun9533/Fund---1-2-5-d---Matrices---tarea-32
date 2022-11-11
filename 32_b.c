#include <stdio.h>

int main()
{
    
    int i, j, x, y, funcion, verde [4][4]; 
    
    //(x+2) 2 + 3y
    //printf("\nDame la variable X\n");
    //scanf("%d", &x);
    //printf("\nDame la variable Y\n");
    //scanf("%d", &y);
    for(x=0;x<4;x++)
    {
        
        for(y=0;y<4;y++)
            {
                printf("\n");
                funcion= ((x+2)*(x+2))+(3*y);
                printf("\n el resultado de la funcion es: [%d] [%d]= %d \t \t",x, y, funcion);
            }
    }
    return 0;
}
