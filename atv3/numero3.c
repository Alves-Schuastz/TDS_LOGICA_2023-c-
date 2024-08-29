
#include <stdio.h>

int main()
{
    float notas[5];
    int i=1;
    float nota;
    float media;
    int cont=5;
    //colocar as notas pelo usuario
   while(i<=cont){
       printf("\ninsira a nota");
       scanf("%f", &nota);
       
        media=media+nota;
        i++;
   }
    
    if(i=5){
        media=media/5;
    }  
    printf("\na media e igual a %.2f", media);
    
    }

