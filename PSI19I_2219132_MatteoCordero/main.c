#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <locale.h>


struct bilhete
{
    char nome[15];
    int a,b;
};

struct user
{
   char username[15];
   char password[12];
   int c;
};

int main()
{
    system("COLOR f0");
    struct bilhete p;
    struct user b;
    setlocale(LC_ALL, "Portuguese");
    int c,d,e;
    FILE*ficheiro;
    ficheiro=fopen("bilhete.txt","a+");

    int festboom[5];
    festboom[0]=15;
    festboom[1]=20;
    festboom[2]=12;
    festboom[3]=festboom[1]*c;
    festboom[4]=festboom[0]*c;
    festboom[5]=festboom[2]*c;

    int avante[5];
    avante[0]=16;
    avante[1]=22;
    avante[2]=14;
    avante[3]=avante[1]*c;
    avante[4]=avante[0]*c;
    avante[5]=avante[2]*c;

    int crato[5];
    crato[0]=20;
    crato[1]=25;
    crato[2]=17;
    crato[3]=crato[1]*c;
    crato[4]=crato[0]*c;
    crato[5]=crato[2]*c;

    int sudoeste[5];
    sudoeste[0]=40;
    sudoeste[1]=50;
    sudoeste[2]=38;
    sudoeste[3]=sudoeste[1]*c;
    sudoeste[4]=sudoeste[0]*c;
    sudoeste[5]=sudoeste[2]*c;

    int nosalive[5];
    nosalive[0]=38;
    nosalive[1]=45;
    nosalive[2]=35;
    nosalive[3]=nosalive[1]*c;
    nosalive[4]=nosalive[0]*c;
    nosalive[5]=nosalive[2]*c;

    int rockinrio[5];
    rockinrio[0]=40;
    rockinrio[1]=46;
    rockinrio[2]=38;
    rockinrio[3]=rockinrio[1]*c;
    rockinrio[4]=rockinrio[0]*c;
    rockinrio[5]=rockinrio[2]*c;

    int rollingloud[5];
    rollingloud[0]=50;
    rollingloud[1]=52;
    rollingloud[2]=45;
    rollingloud[3]=rollingloud[1]*c;
    rollingloud[4]=rollingloud[0]*c;
    rollingloud[5]=rollingloud[2]*c;

    int sumol[5];
    sumol[0]=50;
    sumol[1]=52;
    sumol[2]=45;
    sumol[3]=sumol[1]*c;
    sumol[4]=sumol[0]*c;
    sumol[5]=sumol[2]*c;

    int superbock[5];
    superbock[0]=50;
    superbock[1]=52;
    superbock[2]=45;
    superbock[3]=superbock[1]*c;
    superbock[4]=superbock[0]*c;
    superbock[5]=superbock[2]*c;

    int primaverasound[5];
    primaverasound[0]=50;
    primaverasound[1]=52;
    primaverasound[2]=45;
    primaverasound[3]=primaverasound[1]*c;
    primaverasound[4]=primaverasound[0]*c;
    primaverasound[5]=primaverasound[2]*c;

    printf(":::::::::: ::::::::::  ::::::::  ::::::::::: ::::::::::: :::     :::     :::     :::::::::::  ::::::::\n");
    printf(":+:        :+:        :+:    :+:     :+:         :+:     :+:     :+:   :+: :+:       :+:     :+:    :+:\n");
    printf("+:+        +:+        +:+            +:+         +:+     +:+     +:+  +:+   +:+      +:+     +:+\n");
    printf(":#::+::#   +#++:++#   +#++:++#++     +#+         +#+     +#+     +:+ +#++:++#++:     +#+     +#++:++#++\n");
    printf("+#+        +#+               +#+     +#+         +#+      +#+   +#+  +#+     +#+     +#+            +#+\n");
    printf("#+#        #+#        #+#    #+#     #+#         #+#       #+#+#+#   #+#     #+#     #+#     #+#    #+#\n");
    printf("###        ##########  ########      ###     ###########     ###     ###     ### ###########  ########\n\n\n");
    printf(":::::::::  ::::::::::\n");
    printf(":+:    :+: :+:\n");
    printf("+:+    +:+ +:+\n");
    printf("+#+    +:+ +#++:++#\n");
    printf("+#+    +#+ +#+\n");
    printf("#+#    #+# #+#\n");
    printf("#########  ##########\n\n\n");
    printf(":::     ::: :::::::::: :::::::::      :::      ::::::::\n");
    printf(":+:     :+: :+:        :+:    :+:   :+: :+:   :+:    :+:\n");
    printf("+:+     +:+ +:+        +:+    +:+  +:+   +:+  +:+    +:+\n");
    printf("+#+     +:+ +#++:++#   +#++:++#:  +#++:++#++: +#+    +:+\n");
    printf(" +#+   +#+  +#+        +#+    +#+ +#+     +#+ +#+    +#+\n");
    printf("  #+#+#+#   #+#        #+#    #+# #+#     #+# #+#    #+#\n");
    printf("    ###     ########## ###    ### ###     ###  ########\n\n\n");
    system("pause");
    system("cls");


   printf("digite o nome de utilizador\n\n");
   gets(b.username);

   printf("\ndigite pass\n\n");
   scanf("%s",&b.password);
   if(strcmp(b.username,"admin")==0)
   {
       if(strcmp(b.password,"123")==0)
          {
            system("cls");
            printf("\npassword correta\n\n");
            system("COLOR f2");

          }
            else{
                system("cls");
                printf("\npassword errada\n\n");
                system("COLOR f4");
                return 0;
            }
   }
   else
   {
       system("cls");
       printf("\nnome sem registro\n\n");
       system("COLOR f4");
       return 0;
   }
    system("pause");
    system("cls");


    system("COLOR f0");
    printf("Principais festivais deste ver�o\n\n");
    printf("1-Boom Festival\n");
    printf("2-Avante\n");
    printf("3-Crato\n");
    printf("4-Meo Sudoeste\n");
    printf("5-Nos Alive\n");
    printf("6-Rock In Rio\n");
    printf("7-Rolling Loud\n");
    printf("8-Summol Summer Fest\n");
    printf("9-Super Bock Super Rock\n");
    printf("10-Nos Primavera Sound\n");

    printf("\nDigite o numero de um dos festivais\n\n");
    scanf("%i",&p.a);
    fflush(stdin);
    system("cls");

    printf("Menu\n\n");
    printf("Digite o nome do cliente\n\n");
    gets(p.nome);
    fflush(stdin);
    printf("\nDigite a idade\n\n");
    scanf("%i",&d);
    fflush(stdin);
    system("cls");


    switch(p.a)
    {
        case 1:printf(":::::::::   ::::::::   ::::::::  ::::    ::::\n");
               printf(":+:    :+: :+:    :+: :+:    :+: +:+:+: :+:+:+\n");
               printf("+:+    +:+ +:+    +:+ +:+    +:+ +:+ +:+:+ +:+\n");
               printf("+#++:++#+  +#+    +:+ +#+    +:+ +#+  +:+  +#+\n");
               printf("+#+    +#+ +#+    +#+ +#+    +#+ +#+       +#+ \n");
               printf("#+#    #+# #+#    #+# #+#    #+# #+#       #+#\n");
               printf("#########   ########   ########  ###       ###\n\n\n");
               printf(":::::::::: ::::::::::  ::::::::  ::::::::::: ::::::::::: :::     :::     :::     :::\n");
               printf(":+:        :+:        :+:    :+:     :+:         :+:     :+:     :+:   :+: :+:   :+:\n");
               printf("+:+        +:+        +:+            +:+         +:+     +:+     +:+  +:+   +:+  +:+\n");
               printf(":#::+::#   +#++:++#   +#++:++#++     +#+         +#+     +#+     +:+ +#++:++#++: +#+\n");
               printf("+#+        +#+               +#+     +#+         +#+      +#+   +#+  +#+     +#+ +#+\n");
               printf("#+#        #+#        #+#    #+#     #+#         #+#       #+#+#+#   #+#     #+# #+#\n");
               printf("###        ##########  ########      ###     ###########     ###     ###     ### ##########\n\n\n");



               system("pause");
               system("cls");
               printf("Boom Festival 2020\n\n");
               printf("Boom Festival � um festival bienal realizado em Portugal durante a lua cheia de Agosto.\n");
               printf("Iniciou-se em 1997 enquanto evento musical,mas evoluiu ao longo das suas\n");
               printf("edi��es para uma celebra�� da cultura alternativa.\n\n");
               printf("localiza��o: Idanha-A-Nova\n\n\n");



               printf("|----------------|   |----------------|   |----------------| \n");
               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|     Cartaz     |   |      BOOM      |   |      2020      |\n");
               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|----------------|   |----------------|   |----------------|\n\n");

               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|    Infected    |   |----------------|   |      1200      |\n");
               printf("|----------------|   |    Shpongle    |   |----------------|\n");
               printf("|    Mushroom    |   |----------------|   |   Micrograms   |\n");
               printf("|----------------|   |----------------|   |----------------|\n\n");

               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|  Juno Reactor  |   |  Hallucinogen  |   |      Astrix    |\n");
               printf("|----------------|   |----------------|   |----------------|\n");
               printf("|----------------|   |----------------|   |----------------|\n\n");



               system("pause");
               system("cls");
               printf("pretende adquirir bilhete?\n\n");
               printf("1-sim\n2-nao\n\n");
               scanf("%i",&p.b);
               fflush(stdin);
               system("cls");
               if(p.b==1)
                  {
                    printf("bilhete para quantos dias? max.8\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {

                            festboom[3]=festboom[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Boom -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",festboom[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,festboom[3]);break;

                        }
                        else
                        {

                            festboom[4]=festboom[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Boom -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",festboom[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,festboom[4]);break;
                        }
                     }
                     else
                     {

                            festboom[5]=festboom[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Boom -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",festboom[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,festboom[5]);break;
                     }

                  }
                else
                {
                    printf("At� a proxima\n");break;
                }


        case 2: printf("    :::     :::     :::     :::     ::::    ::: ::::::::::: :::::::::: \n");
                printf("  :+: :+:   :+:     :+:   :+: :+:   :+:+:   :+:     :+:     :+:        \n");
                printf(" +:+   +:+  +:+     +:+  +:+   +:+  :+:+:+  +:+     +:+     +:+\n");
                printf("+#++:++#++: +#+     +:+ +#++:++#++: +#+ +:+ +#+     +#+     +#++:++#\n");
                printf("+#+     +#+  +#+   +#+  +#+     +#+ +#+  +#+#+#     +#+     +#+\n");
                printf("#+#     #+#   #+#+#+#   #+#     #+# #+#   #+#+#     #+#     #+#\n");
                printf("###     ###     ###     ###     ### ###    ####     ###     ##########\n\n\n");




                system("pause");
                system("cls");
                printf("Avante 2020\n\n");
                printf("A Festa do Avante � uma festa pol�tica, cultural, desportiva e musical com a dura��o de 3 dias,\n");
                printf("realizada pelo Partido Comunista Portugu�s.\n");
                printf("� o maior evento pol�tico-cultural realizado em Portugal.\n\n");
                printf("localiza��o: Seixal\n\n\n");



                printf("|----------------|   |----------------|   |----------------| \n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |     Avante     |   |      2020      |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|   Anarchicks   |   |   Blind Zero   |   |      Bonga     |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|    Jon Luz     |   |  Kimi Djabate  |   | Expensive Soul |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");



                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)

                {
                    printf("bilhete para quantos dias? max.3\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {

                            avante[3]=avante[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Avante ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",avante[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,avante[3]);break;

                        }
                        else
                        {

                            avante[4]=avante[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Avante ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",avante[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,avante[4]);break;
                        }
                     }
                     else
                     {

                            avante[5]=avante[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Avante ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",avante[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,avante[5]);break;
                     }

                  }
                else
                {
                    printf("At� a proxima\n");break;
                }


        case 3: printf(" ::::::::  :::::::::      :::     :::::::::::  ::::::::\n");
                printf(":+:    :+: :+:    :+:   :+: :+:       :+:     :+:    :+:\n");
                printf("+:+        +:+    +:+  +:+   +:+      +:+     +:+    +:+\n");
                printf("+#+        +#++:++#:  +#++:++#++:     +#+     +#+    +:+\n");
                printf("+#+        +#+    +#+ +#+     +#+     +#+     +#+    +#+\n");
                printf("#+#    #+# #+#    #+# #+#     #+#     #+#     #+#    #+#\n");
                printf(" ########  ###    ### ###     ###     ###      ########  \n\n\n");




                system("pause");
                system("cls");
                printf("Crato 2020\n\n");
                printf("O Festival do Crato � um festival de m�sica anual realizado na vila do Crato,\n");
                printf("Portalegre realizado pela primeira vez em 1984.\n");
                printf("Anteriormente denominado por Feira de Artesanato e Gastronomia, as suas principais\n");
                printf("atrac��es s�o a gastronomia e as artes tradicionais do Alto Alentejo e Portugal.\n\n");
                printf("localiza��o: Portalegre\n\n\n");
                printf("|----------------|   |----------------|   |----------------| \n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |      Crato     |   |      2020      |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|  Kappa Jotta   |   |     Dillaz     |   |     ProfJam    |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|    The Gift    |   |   Gipsy Kings  |   |     Karetus    |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");


                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)

                {

                    printf("bilhete para quantos dias? max.5\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    printf("bilhete para %i dias\n",c);
                    if(d>=18)

                    {
                        printf("bebidas incluidas\n1-sim\n2-nao\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)

                        {

                            crato[3]=crato[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Crato -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",crato[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,crato[3]);break;

                        }

                        else

                        {

                            crato[4]=crato[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Crato -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",crato[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,crato[4]);break;

                        }

                     }

                     else

                     {

                            crato[5]=crato[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|---- Crato -----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",crato[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,crato[5]);break;

                     }

                }

                else

                {

                    printf("At� a proxima\n");break;

                }


       case 4: printf("::::    ::::  ::::::::::  ::::::::\n");
               printf("+:+:+: :+:+:+ :+:        :+:    :+:\n");
               printf("+:+ +:+:+ +:+ +:+        +:+    +:+\n");
               printf("+#+  +:+  +#+ +#++:++#   +#+    +:+\n");
               printf("+#+       +#+ +#+        +#+    +#+\n");
               printf("#+#       #+# #+#        #+#    #+#\n");
               printf("###       ### ##########  ########\n\n\n");
               printf(" ::::::::  :::    ::: :::::::::   ::::::::  ::::::::::  ::::::::  ::::::::::: ::::::::::\n");
               printf(":+:    :+: :+:    :+: :+:    :+: :+:    :+: :+:        :+:    :+:     :+:     :+:\n");
               printf("+:+        +:+    +:+ +:+    +:+ +:+    +:+ +:+        +:+            +:+     +:+\n");
               printf("+#++:++#++ +#+    +:+ +#+    +:+ +#+    +:+ +#++:++#   +#++:++#++     +#+     +#++:++#\n");
               printf("       +#+ +#+    +#+ +#+    +#+ +#+    +#+ +#+               +#+     +#+     +#+\n");
               printf("#+#    #+# #+#    #+# #+#    #+# #+#    #+# #+#        #+#    #+#     #+#     #+#\n");
               printf(" ########   ########  #########   ########  ##########  ########      ###     ##########\n\n\n");



                system("pause");
                system("cls");
                printf("Meo Sudoeste 2020\n\n");
                printf("O MEO Sudoeste come�ou em 1997 e tornou-se um dos mais importantes\n");
                printf("festivais de ver�o em Portugal,pois concentra uma vasta gama \n");
                printf("de artistas de renome de v�rios estilos musicais que v�o desde\n");
                printf("o Reggae ao Rock, passando pela m�sica electr�nica, ou mesmo pelo Fado.\n\n");
                printf("localiza��o: Zambujeira do Mar \n\n\n");
                printf("|----------------|   |----------------|   |----------------| \n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |      Meo       |   |    Sudoeste    |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Bispo      |   |     Meduza     |   |     ProfJam    |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|  Major Lazer   |   |    Bad Bunny   |   |    BlackBear   |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");



                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)

                {

                    printf("bilhete para quantos dias? max.5\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            sudoeste[3]=sudoeste[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Meo ------|\n");
                            printf("|--- Sudoeste ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",sudoeste[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sudoeste[3]);break;
                        }
                        else
                        {
                            sudoeste[4]=sudoeste[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Meo ------|\n");
                            printf("|--- Sudoeste ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",crato[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sudoeste[4]);break;
                        }

                     }
                     else
                     {
                            sudoeste[5]=sudoeste[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|----- Meo ------|\n");
                            printf("|--- Sudoeste ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",sudoeste[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sudoeste[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }

        case 5: printf("::::    :::  ::::::::   ::::::::\n");
                printf(":+:+:   :+: :+:    :+: :+:    :+:\n");
                printf(":+:+:+  +:+ +:+    +:+ +:+\n");
                printf("+#+ +:+ +#+ +#+    +:+ +#++:++#++\n");
                printf("+#+  +#+#+# +#+    +#+        +#+\n");
                printf("#+#   #+#+# #+#    #+# #+#    #+#\n");
                printf("###    ####  ########   ########\n\n\n");
                printf("    :::     :::        ::::::::::: :::     ::: ::::::::::\n");
                printf("  :+: :+:   :+:            :+:     :+:     :+: :+:\n");
                printf(" +:+   +:+  +:+            +:+     +:+     +:+ +:+\n");
                printf("+#++:++#++: +#+            +#+     +#+     +:+ +#++:++#\n");
                printf("+#+     +#+ +#+            +#+      +#+   +#+  +#+\n");
                printf("#+#     #+# #+#            #+#       #+#+#+#   #+#\n");
                printf("###     ### ########## ###########     ###     ##########\n\n\n");



                system("pause");
                system("cls");
                printf("Nos Alive 2020\n\n");
                printf("NOS Alive � um festival de m�sica anualrealizado no Passeio Maritimo\n");
                printf("de Alg�s embora este tenha poucas edi��es j� � um festival consolidado\n");
                printf("e encontra-se entre os mais reconhecidos do pa�s.\n");
                printf("A primeira edi��o deste festival foi realizado em Junho de 2007.\n\n");
                printf("localiza��o: Oeiras\n\n\n");
                printf("|----------------|   |----------------|   |----------------| \n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |      Nos       |   |      Alive     |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("| Kendrick Lamar |   |     Khalid     |   |  Billie Eilish |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|  Major Lazer   |   |    Bad Bunny   |   |    BlackBear   |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");



                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.4\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            nosalive[3]=nosalive[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|--- Nos Alive --|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",nosalive[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,nosalive[3]);break;
                        }
                        else
                        {
                            nosalive[4]=nosalive[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|--- Nos Alive --|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",nosalive[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,nosalive[4]);break;
                        }

                     }
                     else
                     {
                            nosalive[5]=nosalive[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|--- Nos Alive --|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",nosalive[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,nosalive[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }

        case 6: printf(":::::::::   ::::::::   ::::::::  :::    :::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:   :+:\n");
                printf("+:+    +:+ +:+    +:+ +:+        +:+  +:+\n");
                printf("+#++:++#:  +#+    +:+ +#+        +#++:++\n");
                printf("+#+    +#+ +#+    +#+ +#+        +#+  +#+\n");
                printf("#+#    #+# #+#    #+# #+#    #+# #+#   #+#\n");
                printf("###    ###  ########   ########  ###    ###\n\n\n");
                printf("::::::::::: ::::    :::\n");
                printf("    :+:     :+:+:   :+:\n");
                printf("    +:+     :+:+:+  +:+\n");
                printf("    +#+     +#+ +:+ +#+\n");
                printf("    +#+     +#+  +#+#+#\n");
                printf("    #+#     #+#   #+#+#\n");
                printf("########### ###    ####\n\n\n");
                printf(":::::::::  :::::::::::  ::::::::\n");
                printf(":+:    :+:     :+:     :+:    :+:\n");
                printf("+:+    +:+     +:+     +:+    +:+\n");
                printf("+#++:++#:      +#+     +#+    +:+\n");
                printf("+#+    +#+     +#+     +#+    +#+\n");
                printf("#+#    #+#     #+#     #+#    #+#\n");
                printf("###    ### ###########  ########\n\n\n");



                system("pause");
                system("cls");
                printf("Rock In Rio 2020\n\n");
                printf("O Rock in Rio � um festival de m�sica realizado pela primeira vez em 1985\n");
                printf("sendo, desde sua cria��o, reconhecido como o maior festival musical do planeta.\n");
                printf("Foi originalmente organizado no Rio de Janeiro ma shoje em dia ja teve \n");
                printf("20 edi��es, oito no Brasil, oito em Portugal, tr�s na Espanha e uma nos Estados Unidos.\n\n");
                printf("localiza��o: Lisboa, Parque da Bela Vista\n\n\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |      Rock      |   |       In       |   |       Rio      |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|  Post Malone   |   |    Plut�nio    |   | David Carreira |   |   Grognation   |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|  Sam The Kid   |   |     Anitta     |   | Camila Cabello |   |      Bush      |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");




                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.4\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            rockinrio[3]=rockinrio[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Rock In Rio -|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rockinrio[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rockinrio[3]);break;
                        }
                        else
                        {
                            rockinrio[4]=rockinrio[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Rock In Rio -|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rockinrio[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rockinrio[4]);break;
                        }

                     }
                     else
                     {
                            rockinrio[5]=rockinrio[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Rock In Rio -|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rockinrio[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rockinrio[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }

        case 7: printf(":::::::::   ::::::::  :::        :::        ::::::::::: ::::    :::  ::::::::\n");
                printf(":+:    :+: :+:    :+: :+:        :+:            :+:     :+:+:   :+: :+:    :+:\n");
                printf("+:+    +:+ +:+    +:+ +:+        +:+            +:+     :+:+:+  +:+ +:+\n");
                printf("+#++:++#:  +#+    +:+ +#+        +#+            +#+     +#+ +:+ +#+ :#:\n");
                printf("+#+    +#+ +#+    +#+ +#+        +#+            +#+     +#+  +#+#+# +#+   +#+#\n");
                printf("#+#    #+# #+#    #+# #+#        #+#            #+#     #+#   #+#+# #+#    #+#\n");
                printf("###    ###  ########  ########## ########## ########### ###    ####  ########\n\n\n");
                printf(":::         ::::::::  :::    ::: :::::::::\n");
                printf(":+:        :+:    :+: :+:    :+: :+:    :+:\n");
                printf("+:+        +:+    +:+ +:+    +:+ +:+    +:+\n");
                printf("+#+        +#+    +:+ +#+    +:+ +#+    +:+\n");
                printf("+#+        +#+    +#+ +#+    +#+ +#+    +#+\n");
                printf("#+#        #+#    #+# #+#    #+# #+#    #+#\n");
                printf("##########  ########   ########  #########\n\n\n");



                system("pause");
                system("cls");
                printf("Rolling Loud 2020\n\n");
                printf("O Rolling Loud Festival � um evento de m�sica de 3 dias que come�ou em Miami\n");
                printf("e agora � considerado o maior festival de Hip-Hop do mundo.\n");
                printf("Este festival para alem de ter planos de se expandir internacionalmente para o Jap�o e\n");
                printf("China este ano chegou a Europa mais especificamente a Portugal.\n\n");
                printf("localiza��o: Portim�o\n\n\n");
                printf("|----------------|   |----------------|   |----------------| \n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |    Rolling     |   |      Loud      |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|  A$SAP Rocky   |   |  Wiz Khalifa   |   |     Dabady     |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|     Future     |   |    Lil Baby    |   |  Lil Uzi Vert  |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|  Trippie Redd  |   |   Chief Keef   |   |   Nle Choppa   |\n");
                printf("|----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|\n\n");



                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.3\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            rollingloud[3]=rollingloud[1]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|---- Rolling ---|\n");
                            printf("|----- Loud -----|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rollingloud[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rollingloud[3]);break;
                        }
                        else
                        {
                            rollingloud[4]=rollingloud[0]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|---- Rolling ---|\n");
                            printf("|----- Loud -----|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rollingloud[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rollingloud[4]);break;
                        }

                     }
                     else
                     {
                            rollingloud[5]=rollingloud[2]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|---- Rolling ---|\n");
                            printf("|----- Loud -----|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",rollingloud[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,rollingloud[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }


        case 8: printf(" ::::::::  :::    ::: ::::    ::::  ::::    ::::   ::::::::  :::\n");
                printf(":+:    :+: :+:    :+: +:+:+: :+:+:+ +:+:+: :+:+:+ :+:    :+: :+:\n");
                printf("+:+        +:+    +:+ +:+ +:+:+ +:+ +:+ +:+:+ +:+ +:+    +:+ +:+\n");
                printf("+#++:++#++ +#+    +:+ +#+  +:+  +#+ +#+  +:+  +#+ +#+    +:+ +#+\n");
                printf("       +#+ +#+    +#+ +#+       +#+ +#+       +#+ +#+    +#+ +#+\n");
                printf("#+#    #+# #+#    #+# #+#       #+# #+#       #+# #+#    #+# #+#\n");
                printf(" ########   ########  ###       ### ###       ###  ########  ##########\n\n\n");
                printf(" ::::::::  :::    ::: ::::    ::::  ::::    ::::  :::::::::: :::::::::\n");
                printf(":+:    :+: :+:    :+: +:+:+: :+:+:+ +:+:+: :+:+:+ :+:        :+:    :+:\n");
                printf("+:+        +:+    +:+ +:+ +:+:+ +:+ +:+ +:+:+ +:+ +:+        +:+    +:+\n");
                printf("+#++:++#++ +#+    +:+ +#+  +:+  +#+ +#+  +:+  +#+ +#++:++#   +#++:++#:\n");
                printf("       +#+ +#+    +#+ +#+       +#+ +#+       +#+ +#+        +#+    +#+\n");
                printf("#+#    #+# #+#    #+# #+#       #+# #+#       #+# #+#        #+#    #+#\n");
                printf(" ########   ########  ###       ### ###       ### ########## ###    ###\n\n\n");
                printf(":::::::::: ::::::::::  ::::::::  :::::::::::\n");
                printf(":+:        :+:        :+:    :+:     :+:\n");
                printf("+:+        +:+        +:+            +:+\n");
                printf(":#::+::#   +#++:++#   +#++:++#++     +#+\n");
                printf("+#+        +#+               +#+     +#+\n");
                printf("+#+        +#+               +#+     +#+\n");
                printf("###        ##########  ########      ###\n\n\n");



                system("pause");
                system("cls");
                printf("Summol Summer Fest 2020\n\n");
                printf("O Sumol Summer Fest nasceu em 2009 e � um festival de Hip-Hop Portugues\n");
                printf("Este festival � sempre sin�nimo de celebra��o\n");
                printf("com a  praia, o calor, os amigos e de muita m�sica.\n\n");
                printf("localiza��o: Ericeira\n\n\n");
                printf("|----------------|   |----------------|  \n");
                printf("|----------------|   |----------------|  \n");
                printf("|     Cartaz     |   |     Summol     |  \n");
                printf("|----------------|   |----------------|  \n");
                printf("|----------------|   |----------------|  \n\n");

                printf("|----------------|   |----------------|   \n");
                printf("|----------------|   |----------------|   \n");
                printf("|  Julinho KSD   |   |  Trippie Redd  |   \n");
                printf("|----------------|   |----------------|   \n");
                printf("|----------------|   |----------------|   \n\n");

                printf("|----------------|   |----------------|   \n");
                printf("|----------------|   |----------------|   \n");
                printf("|    Nenny On    |   |     Piruka     |   \n");
                printf("|----------------|   |----------------|   \n");
                printf("|----------------|   |----------------|   \n\n");


                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.2\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            sumol[3]=sumol[1]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|----- Sumol ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",sumol[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sumol[3]);break;
                        }
                        else
                        {
                            sumol[4]=sumol[0]*c;
                            printf("|----------------|\n");
                           printf("|---- BILHETE ---|\n");
                            printf("|----- Sumol ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",sumol[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sumol[4]);break;
                        }

                     }
                     else
                     {
                            sumol[5]=sumol[2]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|----- Sumol ----|\n");
                            printf("|--- Festival ---|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i euros\n",sumol[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,sumol[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }

        case 9: printf(" ::::::::  :::    ::: :::::::::  :::::::::: :::::::::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:        :+:    :+:\n");
                printf("+:+        +:+    +:+ +:+    +:+ +:+        +:+    +:+\n");
                printf("+#++:++#++ +#+    +:+ +#++:++#+  +#++:++#   +#++:++#:\n");
                printf("       +#+ +#+    +#+ +#+        +#+        +#+    +#+\n");
                printf("#+#    #+# #+#    #+# #+#        #+#        #+#    #+#\n");
                printf(" ########   ########  ###        ########## ###    ### \n\n\n");
                printf(":::::::::   ::::::::   ::::::::  :::    :::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:   :+:\n");
                printf("+:+    +:+ +:+    +:+ +:+        +:+  +:+\n");
                printf("+#++:++#+  +#+    +:+ +#+        +#++:++\n");
                printf("+#+    +#+ +#+    +#+ +#+        +#+  +#+\n");
                printf("#+#    #+# #+#    #+# #+#    #+# #+#   #+#\n");
                printf("#########   ########   ########  ###    ###\n\n\n");
                printf(" ::::::::  :::    ::: :::::::::  :::::::::: :::::::::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:        :+:    :+:\n");
                printf("+:+        +:+    +:+ +:+    +:+ +:+        +:+    +:+\n");
                printf("+#++:++#++ +#+    +:+ +#++:++#+  +#++:++#   +#++:++#:\n");
                printf("       +#+ +#+    +#+ +#+        +#+        +#+    +#+\n");
                printf("#+#    #+# #+#    #+# #+#        #+#        #+#    #+#\n");
                printf(" ########   ########  ###        ########## ###    ###\n\n\n");
                printf(":::::::::   ::::::::   ::::::::  :::    :::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:   :+:\n");
                printf("+:+    +:+ +:+    +:+ +:+        +:+  +:+\n");
                printf("+#++:++#:  +#+    +:+ +#+        +#++:++\n");
                printf("+#+    +#+ +#+    +#+ +#+        +#+  +#+\n");
                printf("#+#    #+# #+#    #+# #+#    #+# #+#   #+#\n");
                printf("###    ###  ########   ########  ###    ###\n\n\n");




                system("pause");
                system("cls");
                printf("Super Bock Super Rock 2020\n\n");
                printf("O Super Bock Super Rock � um festival de m�sica de Ver�o\n");
                printf("realizado anualmente em Portugal. � organizado desde 1995 e �\n");
                printf("actualmente, um dos mais importantes festivais portugueses.\n\n");
                printf("localiza��o: Meco\n\n\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|     Super      |   |      Bock      |   |      Super     |   |      Rock      |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|    Phoenix     |   |      Migos     |   |     ProfJam    |   |  Conan Osiris  |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|  Lana Del Rei  |   |   Metronomy    |   |   Cat Power    |   |       FKJ      |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");





                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.3\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            superbock[3]=superbock[1]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Super Bock --|\n");
                            printf("|-- Super Rock --|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",superbock[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,superbock[3]);break;
                        }
                        else
                        {
                            superbock[4]=superbock[0]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Super Bock --|\n");
                            printf("|-- Super Rock --|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",superbock[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,superbock[4]);break;
                        }

                     }
                     else
                     {
                            superbock[5]=superbock[2]*c;
                            printf("|----------------|\n");
                            printf("|--- BILHETE ----|\n");
                            printf("|-- Super Bock --|\n");
                            printf("|-- Super Rock --|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",superbock[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,superbock[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }

       case 10: printf("::::    :::  ::::::::   ::::::::\n");
                printf(":+:+:   :+: :+:    :+: :+:    :+:\n");
                printf(":+:+:+  +:+ +:+    +:+ +:+\n");
                printf("+#+ +:+ +#+ +#+    +:+ +#++:++#++\n");
                printf("+#+  +#+#+# +#+    +#+        +#+\n");
                printf("#+#   #+#+# #+#    #+# #+#    #+#\n");
                printf("###    ####  ########   ########\n\n\n");
                printf(":::::::::  :::::::::  ::::::::::: ::::    ::::      :::     :::     ::: :::::::::: :::::::::      :::\n");
                printf(":+:    :+: :+:    :+:     :+:     +:+:+: :+:+:+   :+: :+:   :+:     :+: :+:        :+:    :+:   :+: :+:\n");
                printf("+:+    +:+ +:+    +:+     +:+     +:+ +:+:+ +:+  +:+   +:+  +:+     +:+ +:+        +:+    +:+  +:+   +:+\n");
                printf("+#++:++#+  +#++:++#:      +#+     +#+  +:+  +#+ +#++:++#++: +#+     +:+ +#++:++#   +#++:++#:  +#++:++#++:\n");
                printf("+#+        +#+    +#+     +#+     +#+       +#+ +#+     +#+  +#+   +#+  +#+        +#+    +#+ +#+     +#+\n");
                printf("#+#        #+#    #+#     #+#     #+#       #+# #+#     #+#   #+#+#+#   #+#        #+#    #+# #+#     #+#\n");
                printf("###        ###    ### ########### ###       ### ###     ###     ###     ########## ###    ### ###     ###\n\n\n");
                printf(" ::::::::   ::::::::  :::    ::: ::::    ::: :::::::::\n");
                printf(":+:    :+: :+:    :+: :+:    :+: :+:+:   :+: :+:    :+:\n");
                printf("+:+        +:+    +:+ +:+    +:+ :+:+:+  +:+ +:+    +:+\n");
                printf("+#++:++#++ +#+    +:+ +#+    +:+ +#+ +:+ +#+ +#+    +:+\n");
                printf("       +#+ +#+    +#+ +#+    +#+ +#+  +#+#+# +#+    +#+\n");
                printf("#+#    #+# #+#    #+# #+#    #+# #+#   #+#+# #+#    #+#\n");
                printf(" ########   ########   ########  ###    #### #########\n\n\n");



                system("pause");
                system("cls");
                printf("Nos Primavera Sound 2020\n\n");
                printf("A primeira edi��o do festival em 2012 foi um verdadeiro sucesso\n");
                printf("e a partir dai o Nos Primavera Sound continuou a crescer \n");
                printf("destancando-se por investir em novos artistas e bandas.\n \n");
                printf("localiza��o: Porto\n\n\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|     Cartaz     |   |      Nos       |   |   Primavera    |   |      Sound     |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|     Tyler      |   |----------------|   |----------------|   |    Caroline    |\n");
                printf("|----------------|   |   Bad Bunny    |   |  Lana Del Rey  |   |----------------|\n");
                printf("|  The Creator   |   |----------------|   |----------------|   |    Polacheck   |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");

                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("| Chico da Tina  |   |   Mura Masa    |   |   Yung Beef    |   |     Koffee     |\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n");
                printf("|----------------|   |----------------|   |----------------|   |----------------|\n\n");




                system("pause");
                system("cls");
                printf("pretende adquirir bilhete?\n\n");
                printf("1-sim\n2-nao\n\n");
                scanf("%i",&p.b);
                fflush(stdin);
                system("cls");
                if(p.b==1)
                {
                    printf("bilhete para quantos dias? max.3\n\n");
                    scanf("%i",&c);
                    fflush(stdin);
                    system("cls");
                    if(d>=18)
                    {
                        printf("bebidas incluidas\n\n1-sim\n2-nao\n\n");
                        scanf("%i",&e);
                        fflush(stdin);
                        system("cls");
                        if(e==1)
                        {
                            primaverasound[3]=primaverasound[1]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|--- Primavera --|\n");
                            printf("|---- Sound -----|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",primaverasound[3]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,primaverasound[3]);break;
                        }
                        else
                        {
                            primaverasound[4]=primaverasound[0]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|--- Primavera --|\n");
                            printf("|---- Sound -----|\n");
                            printf("|----- 2020 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",primaverasound[4]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,primaverasound[4]);break;
                        }

                     }
                     else
                     {
                            primaverasound[5]=primaverasound[2]*c;
                            printf("|----------------|\n");
                            printf("|---- BILHETE ---|\n");
                            printf("|--- Primavera --|\n");
                            printf("|---- Sound -----|\n");
                            printf("|----- < 18 -----|\n");
                            printf("|----------------|\n\n\n");
                            printf("Bilhete para %s\n",p.nome);
                            printf("%i dias\n",c);
                            printf("%i euros\n",primaverasound[5]);
                            fprintf(ficheiro,"  // bilhete de %s para %i dias //  ",p.nome,primaverasound[5]);break;
                     }
                }
                else
                {
                    printf("At� a proxima\n");break;
                }
                default:  printf("360�\n");



    }

}

