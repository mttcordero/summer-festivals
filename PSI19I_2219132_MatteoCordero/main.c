#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;

    printf("festivais de verão\n");
    Sleep(1500);
    system("cls");

    printf("Principais festivais deste verão\n");
    printf("1-Boom Festival\n");
    printf("2-Avante\n");
    printf("3-Crato\n");
    printf("4-Meo Sudoeste\n");
    printf("5-Nos Alive\n");
    printf("6-Rock In Rio\n");
    printf("7-Rolling Loud\n");
    printf("8-Summol Summer Fest\n");
    printf("9-Super Bock Super Rock\n");
    printf("10-Nos Primavera Sound\n\n");
    printf("Digite o numero de um dos festivais\n");
    scanf("%i",&a);

    switch(a)
    {
        case 1: printf("Boom Festival\n");
                getch();
                system("cls");
                printf("Boom Festival é um festival bienal realizado em Portugal durante a lua cheia de Agosto.\n");
                printf("Iniciou-se em 1997 enquanto evento musical,mas evoluiu ao longo das suas edições\n");
                printf("para uma celebraçã da cultura alternativa\n");

    }

}
