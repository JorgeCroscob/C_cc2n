#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  tm,c, f;
    int menu;
    printf("TEMPERATURA: ENTRADA DE DADOS.\n");
    printf("DIGITE A TEMPERATURA:");
    scanf("%f", &tm);
    printf("MENU: ESCOLHA PARA QUAL VC QUER COMVERTER\n");
    printf("C(CELSIOS)[1]\n");
    printf("F(FAHRENHEIT)[2]\n");
    scanf("%i",&menu);
    if(menu < 1 || menu > 2){
        printf("ESCOLHA UM OPICAO VALIDANO MENU.");
    }
    else if(menu == 1){
        c = (tm / 1.8) - 32;
        printf("TEMPERATURA EM  EM C %.0f",c);
    }
    else if( menu == 2){
        f =  (tm * 1.8) + 32;
        printf("TEMPERATURA EM  EM F %.0f",f);

    }


    return 0;
}
