#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "temp.h"
#include "apuestas.h"
#define R 5
#define A 10
#define V 25
#define N 100
#define MAXJUG 6
typedef struct{
    char nombre[30];
    int saldo;
    int llevapostado;

}usuario;

void temp(int n);
void ssaldo ();
int main()
{
 int a,b,c,X,njugadores,longiN,i;
 int bote_ganador;
 srand(time(0));
 char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
 char cara[14] = {'1','2','3','4','5','6','7','8','9','10','J', 'Q', 'K', 'A'};
 int num, l;
 int elecc[5][2];
 int j, paloI, caraI, dup;
 int selected = 0;
 bool deck[4][13] = {false};

 usuario jugador[MAXJUG];
 FILE *fp;
 char ch;

 printf("Bienvenidos a PokerToChido, esperemos que lo disfrutéis \n");
 printf("\n");
 printf("\n");
 while(1)
 {
    printf("-----------Menu Principal-----------\n");
	printf("Pulse 1 si quiere leer las instrucciones \n");
 	printf("Pulse 2 si quiere iniciar la partida \n");
 	printf("Pulse 3 si desea salir del juego \n");
 	printf("\n");
 	scanf("%d",&a);
 switch (a)
 {
 	case 1:
 		printf("Las instrucciones para el juego son las siguientes: ");
 		 fp = fopen("Aquí iría la dirección o localización del archivo INSTRUCCIONES dentro del dispositivos de cada usuario utilizando el símbolo /. ejemplo: C:/Users/sergi/Desktop/Nueva carpeta/Instrucciones.txt", "r");

      while((ch=fgetc(fp)) != EOF)
        printf("%c", ch);

      fclose(fp);
       		break;
 	case 2:
 	    printf("Preparese para configurar su juego...\n\n");
 	    printf("Introduzca un numero de jugadores (de 2 a 6):");
 	    scanf("%d", &njugadores);
 	    for(i=0;i<njugadores;i++)
            {
                do
                {
                    printf("Escribe el nombre del jugador %d :",i+1);
                    scanf("%s",jugador[i].nombre);
		            longiN=strlen(jugador[i].nombre);
		        }while(longiN>30);
	        }
            printf("Prepárense para recibir sus cartas...cada jugador dispone de 5 segundos para visualizarlas\n\n");

                    temp(7);
                    system("cls");//borra todo lo anterior impreso en pantalla
                    for ( i = 0; i < njugadores; i++)
                    {
                        printf("Mano de %s es:\n",jugador[i].nombre);
                        int selected = 0;

                        while (selected < 2)
                            {
                                int s = rand() % 4;
                                int f = rand() % 13;
                                if (deck[s][f] == false)
                                    {
                                        deck[s][f] = true;
                                        if (f <= 9)
                                            {
                                                printf("%d", f + 1);
                                            }
                                        else
                                            {
                                                printf("%c",cara[f-10]);
                                            }
                                printf(" %s\n", palo[s]);
                                selected ++;
                                }
                            }
                            temp(5);
                            system("cls");
                            system("pause");
                    }
                    for(i=0;i<njugadores;i++)
                        {
                            jugador[i].saldo=500;
                        }
                    printf("\n");
                    printf("Esta es la primera ronda de apuestas o Pre-Flop.\n\n");
                    printf("Los jugadores a la izquierda del Crupier han de pagar las distinas ciegas.\n");
                    printf("La ciega pequeña ($5) la ha de pagar el primer jugador y la ciega grande ($10), el segundo.\n\n");
                    printf("Es el turno de %s, como eres el primer jugador debes pagar la ciega pequeña.\n",jugador[0].nombre);
                    system("pause");
                    printf("%s ha pagado la ciega pequeña ($5).\n",jugador[0].nombre);
                    bote_ganador=0;
                    jugador[0].saldo = jugador[0].saldo - R;
                    bote_ganador = bote_ganador + R;
                    printf("El saldo actual de %s es de %i.\n\n", jugador[0].nombre, jugador[0].saldo);
                    temp(3);
                    printf("Es el turno de %s,como eres el segundo jugador debes pagar la ciega grande.\n",jugador[1].nombre);
                    system("pause");
                    printf("%s ha pagado la ciega grande ($10).\n",jugador[1].nombre);
                    jugador[1].saldo = jugador[1].saldo - A;
                    bote_ganador = bote_ganador + A;
                    printf("El saldo actual de %s es de %i.\n\n", jugador[1].nombre, jugador[1].saldo);
                    jugador[0].llevapostado=5;
                    jugador[1].llevapostado=10;
                    X=A;
                    if (njugadores>=3 && njugadores<=6)
                        {
                            for(i=2;i<njugadores;i++)
                            {
                                printf("%s para poder seguir jugando es obligatorio que iguales o subas la apuesta.\n",jugador[i].nombre);
                                printf("¿Deseas igualar o subir la apuesta?(Igualo:1//Subo la apuesta:2)\n");
                                scanf("%d", &b);
                                switch (b)
                                {
                                    case 1:
                                                printf("%s ha igualado la apuesta.\n", jugador[i].nombre);
                                                jugador[i].llevapostado=X;
                                                jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                bote_ganador = bote_ganador + X;
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                        break;

                                    case 2:
                                        opciones_fichas ();
                                        scanf("%d", &c);
                                        switch (c)
                                        {
                                            case 1:

                                                if (jugador[i-1].llevapostado != A )
                                                {
                                                printf("%s ha subido la apuesta $25\n", jugador[i].nombre);
                                                jugador[i].llevapostado= jugador[i-1].llevapostado + V;
                                                jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                bote_ganador = bote_ganador + jugador[i].llevapostado;
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                X=jugador[i].llevapostado;
                                                }
                                                else
                                                {
                                                printf("%s ha subido la apuesta $25\n", jugador[i].nombre);
                                                jugador[i].llevapostado= V;
                                                jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                bote_ganador = bote_ganador + V;
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                X= V;
                                                }

                                                break;
                                            case 2:
                                                if (jugador[i-1].llevapostado != A)
                                                {
                                                 printf("%s ha subido la apuesta $100\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i-1].llevapostado + N;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + jugador[i].llevapostado;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                 jugador[i].llevapostado= jugador[i].llevapostado;
                                                 X =jugador[i].llevapostado;
                                                 }
                                                 else
                                                 {
                                                 printf("%s ha subido la apuesta $100\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= N;
                                                 jugador[i].saldo = jugador[i].saldo - N;
                                                 bote_ganador = bote_ganador + N;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                 jugador[i].llevapostado= N;
                                                 X= N;
                                                 }
                                                 break;
                                        }
                                        break;
                                }
                            }
                        }
                    printf("\n Se da por finalizada la primera ronda de apuestas\n");
                    printf("Prepárense para ver las tres primeras cartas...");
                    printf("\n\n");
                    temp(3);
                    getchar();
	                for(i = 0; i < 3; i++)
                        {
		                   do{
		                      paloI = rand() % 4;
		                      caraI = rand() % 3;
                              dup = 0;
		                   for(j = 0; j < i; j++)
		                   {
		                       if(paloI == elecc[j][0] && caraI == elecc[j][1])
		                       dup = 1;
				               break;
		                   }
                           }
                           while(dup != 0);
                           elecc[i][0] = paloI;
                           elecc[i][1] = caraI;
                        }
                        printf("\n");
                        for(i = 0; i < 3; i++)
                            {
                                printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
                            }

                    printf("\n\n");
                    printf("Esta es la segunda ronda de apuestas o Flop.\n\n");
                    for(i=0;i<njugadores;i++)
                            {
                                printf("¿%s deseas mantener tu apuesta o subirla ?(La mantego:1//Subo la apuesta:2)\n", jugador[i].nombre);
                                scanf("%d", &b);
                                switch (b)
                                {
                                    case 1:
                                                printf("%s mantiene su apuesta.\n", jugador[i].nombre);
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                        break;

                                    case 2:
                                        opciones_fichas1 ();
                                        scanf("%d", &c);
                                        switch (c)
                                        {
                                            case 1:
                                                 printf("%s ha subido la apuesta $5\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + R;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + R;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                break;
                                            case 2:
                                                 printf("%s ha subido la apuesta $10\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + A;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + A;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 3:
                                                 printf("%s ha subido la apuesta $25\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + V;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + V;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 4:
                                                 printf("%s ha subido la apuesta $100\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + N;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + N;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                 break;
                                        }
                                        break;
                                }
                                }
                        printf("\n Se da por finalizada la segunda ronda de apuestas\n");
                        printf("Prepárense para ver la cuarta carta...");
                        temp(3);
                        printf("\n\n");
                        getchar();
                        do
                            {
                                paloI = rand() % 4;
                                caraI = rand() % 3;
                                dup = 0;
                                for(j = 0; j < 4; j++)
                                    {
                                        if(paloI == elecc[j][0] && caraI == elecc[j][1])
                                        {
                                            dup = 1;
                                            break;
                                        }
                                    }
                            }
                        while(dup != 0);
                        elecc[3][0] = paloI;
                        elecc[3][1] = caraI;
	                    printf("\n");
	                    for(i = 0; i < 4; i++)
	                    {
	                        printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
                        }

                    printf("\n\n");
                    printf("Esta es la tercera ronda de apuestas o Turn.\n\n");
                    for(i=0;i<njugadores;i++)
                            {
                                printf("¿%s deseas mantener tu apuesta o subirla ?(La mantego:1//Subo la apuesta:2)\n", jugador[i].nombre);
                                scanf("%d", &b);
                                switch (b)
                                {
                                    case 1:
                                                printf("%s mantiene su apuesta.\n", jugador[i].nombre);
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                        break;

                                    case 2:
                                        opciones_fichas1 ();
                                        scanf("%d", &c);
                                        switch (c)
                                        {
                                            case 1:
                                                 printf("%s ha subido la apuesta $5\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + R;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + R;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                break;
                                            case 2:
                                                 printf("%s ha subido la apuesta $10\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + A;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + A;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 3:
                                                 printf("%s ha subido la apuesta $25\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + V;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + V;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 4:
                                                 printf("%s ha subido la apuesta $100\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + N;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + N;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                 break;
                                        }
                                        break;
                                }
                                }
                        printf("\n Se da por finalizada la tercera ronda de apuestas\n");
                        printf("Prepárense para ver la quinta carta...");
                        temp(3);
                        printf("\n\n");
                        getchar();
                        do
                            {
                                paloI = rand() % 4;
                                caraI = rand() % 3;
                                dup = 0;
                                for(j = 0; j < 3; j++)
                                    {
                                        if(paloI == elecc[j][0] && caraI == elecc[j][1])
                                        {
                                            dup = 1;
                                            break;
                                        }
                                    }
                            }
                            while(dup != 0);
                            elecc[4][0] = paloI;
                            elecc[4][1] = caraI;
                            printf("\n");
                            for(i = 0; i < 5; i++)
                                {
                                    printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
                                }


                    printf("\n\n");
                    printf("Esta es la ronda final de apuestas o Showdown.\n\n");
                    for(i=0;i<njugadores;i++)
                            {
                                printf("¿%s deseas mantener tu apuesta o subirla ?(La mantego:1//Subo la apuesta:2)\n", jugador[i].nombre);
                                scanf("%d", &b);
                                switch (b)
                                {
                                    case 1:
                                                printf("%s mantiene su apuesta.\n", jugador[i].nombre);
                                                printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                        break;

                                    case 2:
                                        opciones_fichas1 ();
                                        scanf("%d", &c);
                                        switch (c)
                                        {
                                            case 1:
                                                 printf("%s ha subido la apuesta $5\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + R;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + R;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                break;
                                            case 2:
                                                 printf("%s ha subido la apuesta $10\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + A;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + A;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 3:
                                                 printf("%s ha subido la apuesta $25\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + V;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + V;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);

                                                 break;
                                            case 4:
                                                 printf("%s ha subido la apuesta $100\n", jugador[i].nombre);
                                                 jugador[i].llevapostado= jugador[i].llevapostado + N;
                                                 jugador[i].saldo = jugador[i].saldo - jugador[i].llevapostado;
                                                 bote_ganador = bote_ganador + N;
                                                 printf("El saldo actual de %s es de %i.\n", jugador[i].nombre, jugador[i].saldo);
                                                 break;
                                        }
                                        break;
                                }
                                }
                    //IMPRIMIR LAS CARTAS DE TODOS LOS JUGADORES Y CODIGO DENIZ DICIENDO QUIEN GANO + CODIGO ALEXIA DICIENDO CUANTO GANO

	    break;
	case 3:
	    printf("Vuelva pronto \n");
		exit(0);
		break;
 }

 }
 }
