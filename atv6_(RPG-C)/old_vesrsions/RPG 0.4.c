#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


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
        printf("\nA vida do inimigo agora e %d", hp);
        hp -= dano;

    }
    return hp;
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
    }
        printf("\nagora voce tem %d de HP restante.\n", hp);

     return hp;
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
        printf("aparareceu um ratao!");
        while(hpr>0 && hpp>0){
            hpr=combate(hpr, atkr, atkp);
            printf("\n ");
            printf("\nfim do turno. Aperte (c) para continuar");
            getchar();
            getchar();

            if(hpr>0){
            printf("\n ");
            printf("o ratao ataca!");
            hpp= combateii(hpp,atkp, atkr);
        }
        }
             if(hpr<=0){
            printf("/no ratao foi derrotado!");

            printf("Deseja continuar? (s/n): ");
            char continuar;
            scanf(" %c", &continuar);

            if (continuar == 'n') {
                break;
            }

             }

             else if(hpp<=0){
            printf("\n perdeu playboy!");

        }

       case(1):
        printf("aparareceu um morcego!");
        while(hpm>0 && hpp>0){
            hpr=combate(hpm, atkm, atkp);
            printf("\n ");
            printf("\nfim do turno. Aperte qualquer tecla para continuar");
            getchar();
            getchar();

            if(hpm>0){
            printf("\n ");
            printf("o morcego ataca!");
            hpp= combateii(hpp,atkp, atkm);
        }
        }
             if(hpm<=0){
            printf("/no morcego foi derrotado!");

            printf("Deseja continuar? (s/n): ");
            char continuar;
            scanf(" %c", &continuar);

            if (continuar == 'n') {
                break;
            }

             }

             else if(hpp<=0){
            printf("\n perdeu playboy!");

        }

        case(2):
        printf("aparareceu um urso!");
        while(hpu>0 && hpp>0){
            hpr=combate(hpu, atku, atkp);
            printf("\n ");
            printf("\nfim do turno. qualquer para continuar");
            getchar();
            getchar();

            if(hpu>0){
            printf("\n ");
            printf("o urso ataca!");
            hpp= combateii(hpp,atkp, atku);
        }
        }
             if(hpu<=0){
            printf("/no urso foi derrotado!");

            printf("Deseja continuar? (s/n): ");
            char continuar;
            scanf(" %c", &continuar);

            if (continuar == 'n') {
                break;
            }

             }

             else if(hpp<=0){
            printf("\n perdeu playboy!");

        }

        case(3):
        printf("aparareceu um dragao!");
        while(hpd>0 && hpp>0){
            hpd=combate(hpd, atkd, atkp);
            printf("\n ");
            printf("\nfim do turno. Aperte qualqur para continuar");
            getchar();
            getchar();

            if(hpd>0){
            printf("\n ");
            printf("o dragao ataca!");
            hpp= combateii(hpp,atkp, atkd);
        }
        }
             if(hpd<=0){
            printf("/no dragao foi derrotado!");

            printf("Deseja continuar? (s/n): ");
            char continuar;
            scanf(" %c", &continuar);

            if (continuar == 'n') {
                break;
            }

             }

             else if(hpp<=0){
            printf("\n perdeu playboy!");

        }

}
}
