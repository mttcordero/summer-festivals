#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <locale.h>

// acampar

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,c,d,e,bebidas,dias,boom;
    char nome[30];
    FILE*ficheiro;
    ficheiro=fopen("bilhete.txt","a+");
    bebidas=c*6;
    dias=c*8;
    boom=bebidas+dias;

    printf("festivais de verão\n");
    Sleep(1500);
    system("cls");
    printf("digite o seu primeiro e ultimo nome\n");
    gets(nome);
    fflush(stdin);
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
    fflush(stdin);
    system("cls");

    switch(a)
    {
        case 1: printf("Boom Festival\n");
                Sleep(1500);
                system("cls");
                printf("Boom Festival 2020\n\n");
                printf("Boom Festival é um festival bienal realizado em Portugal durante a lua cheia de Agosto.\n");
                printf("Iniciou-se em 1997 enquanto evento musical,mas evoluiu ao longo das suas\n");
                printf("edições para uma celebraçã da cultura alternativa.\n\n");
                printf("localização: Idanha-A-Nova\n");
                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n");
                printf("selecione\n1-sim\n2-nao");
                scanf("%i",&b);
                fflush(stdin);
                system("cls");
                if(b==1)
                {
                    printf("bilhete para quantos dias? max.8\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    printf("bilhete para %i dias\n",c);
                    printf("digite a sua idade\n");
                    scanf("%i",&d);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n1-sim\n2-nao\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            printf("|----------------|\n");
                            printf("|----BILHETE-----|\n");
                            printf("|----------------|\n\n");
                            printf("%s\n",nome);
                            printf("preço do bilhete: %i\n\n",boom);
                            printf("|----------------|\n");
                            printf("|----------------|\n");
                            fprintf(ficheiro,"bilhete de %s para %i dias , pulseira vermelha",nome,c);
                        }
                        else
                        {
                            printf("|----------------|\n");
                            printf("|----BILHETE-----|\n");
                            printf("|----------------|\n\n");
                            printf("%s\n",nome);
                            printf("preço do bilhete: %i\n\n",boom);
                            printf("|----------------|\n");
                            printf("|----------------|\n");
                            fprintf(ficheiro,"bilhete de %s para %i dias , pulseira roxa",nome,c);
                        }

                     }
                     else
                     {
                         printf("|-----------------|\n");
                         printf("|-----BILHETE-----|\n");
                         printf("|-----------------|\n\n");
                         printf("%s\n",nome);
                         printf("preço do bilhete: %i\n\n",boom);
                         printf("|-----------------|\n");
                         printf("|-----------------|\n");
                         fprintf(ficheiro,"bilhete de %s para %i dias , pulseira laranja",nome,c);
                     }

                  }
                else
                {
                    printf("Até a proxima\n");
                }
        case 2: printf("Avante\n");
                Sleep(1500);
                system("cls");
                printf("Avante 2020\n\n");
                printf("A Festa do Avante! é uma festa política, cultural, desportiva e musical com a duração de 3 dias,\n");
                printf("realizada pelo Partido Comunista Português.\n");
                printf("É o maior evento político-cultural realizado em Portugal.\n\n");
                printf("localização: Seixal\n");
                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n");
                printf("selecione\n1-sim\n2-nao");
                scanf("%i",&b);
                fflush(stdin);
                system("cls");
    }
}








