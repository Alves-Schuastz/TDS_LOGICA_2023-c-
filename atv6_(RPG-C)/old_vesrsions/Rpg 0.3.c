#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//gerar inimigos de forma aleatoria
typedef struct{
    char nome[20];
    int hp;
    int atk;
}inimigo;



int combate(int hp, int atk, int atkp){
    char decisao;
    char p;
    char a;

    char nome[20];
    printf("\nescolha atacar(a) ou pocao(p)");
    scanf(" %c", &decisao);
    if(decisao=='p'){
        printf("\nvoce usou a pocao ");

        hp=hp+30;
        printf("\nsua vida agora e %d", hp);
    }
    else if(decisao=='a'){
   int dano = atkp;
        printf("\nVoce atacou o inimigo e causou %d de dano!\n", dano);
        hp -= dano;

    }
    }

    int combateii(int hp, int atk, int atkp){
    char decisao;
    char p;
    char a;

   int dano = atkp;
        printf("\no inimigo te atacou e infringiu %d de dano!\n", dano);
        hp -= dano;

        if (hp <= 0) {
            printf("\nO voce morreu!\n");
        } else {
            printf("\nagora voce tem %d de HP restante.\n", hp);
        }

    }




int main (){

    char c;
    char nome[20];
    //STATUS
    //ratão
    int hpr=80;
    int atkr=10;

    //morcego
    int hpm=100;
    int atkm=15;

    //Urso
    int hpu=150;
    int atku=30;

    //dragao
    int hpd=200;
    int atkd=40;

    //player
    int hpp=150;
    int atkp=20;

    printf("                                                          ∑ *RPG SUPER FODA* Ω");

    printf("\ndigite o nome do seu personagem:");
    scanf("%s", nome);

    printf("\n ");
    printf("\n ");

    printf("\nencontrou um inimigo!");
    srand(time(NULL));
    int tipo= rand() % 4;

    switch(tipo){

    case(0):
        while(hpr>=0){
    printf("aparareceu um ratao!");
    combate(hpr, atkr, atkp);
    scanf("\n ");
    scanf("\nfim do turno. Aperte (c) para continuar");
    printf(" %c", c);
        }
        while(hpp>=0){
    printf("\n ");
    printf("o ratao ataca!");
    combateii(hpp,atkp, atkr);
    scanf("\nfim do turno. Aperte (c) para continuar");
        }
        if(hpr<0){
            printf("o ratao foi derrotado!");

            printf("Deseja continuar? (s/n): ");
        char continuar;
        scanf(" %c", &continuar);

        if (continuar == 'n') {
            break;

        }
        }
        else{
            printf("perdeu playboy!");
        }
        break;

         case(1):
        while(hpm>=0 && hpp>=0){
    printf("aparareceu um morcego!");
    combate(hpm, atkm, atkp);
    scanf("\n ");
    scanf("\nfim do turno. Aperte (c) para continuar");
    printf(" %c", c);
        //}

    printf("\n ");
    printf("o morcego ataca!");
    combateii(hpp,atkp, atkm);
    scanf("\nfim do turno. Aperte (c) para continuar");


        if(hpr<0){
            printf("o ratao foi derrotado!");
            printf("Deseja continuar? (s/n): ");
        char continuar;
        scanf(" %c", &continuar);

        if (continuar == 'n') {
            break;

        }
        }
        else{
            printf("perdeu playboy!");

            break;
        }

         case(2):
        while(hpu>=0){
    printf("aparareceu um urso!");
    combate(hpu, atku, atkp);
    scanf("\n ");
    scanf("\nfim do turno. Aperte (c) para continuar");
    printf(" %c", c);
        }
        while(hpp>=0){
    printf("\n ");
    printf("o urso ataca!");
    combateii(hpp,atkp, atku);
    scanf("\nfim do turno. Aperte (c) para continuar");
        }
        if(hpr<0){
            printf("o urso foi derrotado!");
            printf("Deseja continuar? (s/n): ");
        char continuar;
        scanf(" %c", &continuar);

        if (continuar == 'n') {
            break;

        }
        }
        else{
            printf("perdeu playboy!");
        }
        break;


         case(3):
        while(hpd>=0){
    printf("aparareceu um dragao!");
    combate(hpd, atkd, atkp);
    scanf("\n ");
    scanf("\nfim do turno. Aperte (c) para continuar");
    printf(" %c", c);
        }
        while(hpp>=0){
    printf("\n ");
    printf("o dragao ataca!");
    combateii(hpp,atkp, atku);
    scanf("\nfim do turno. Aperte (c) para continuar");
        }
        if(hpd<0){
            printf("o dragao foi derrotado!");
            printf("Deseja continuar? (s/n): ");
        char continuar;
        scanf(" %c", &continuar);

        if (continuar == 'n') {
            break;

        }

        }
        break;


    }


}
}

