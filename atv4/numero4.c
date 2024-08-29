#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int maior;
    
    printf("qual número é maior?");
    printf("\ndigite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("\ndigite o segundo valor: ");
    scanf("%d", &b);
    
    printf("\ndigite o terceiro valor: ");
    scanf("%d", &c);
    
    if(a>b && a>c){
        maior=a;
    }
    if(b>a && b>c){
        maior=b;
    }
    if(c>a && c>b){
        maior=c;
    }
    
    printf("\n o número maior é: %d", maior);
}