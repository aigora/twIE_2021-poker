#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

void opcion_a(void);
void opcion_b(void);
int main()
{
 int a  ;
 FILE *fp;
 char ch;

 printf("Bienvenido a PokerToChido, esperemos que lo disfrute.\n");
 printf("\n");
 printf("\n");
 printf("\n");
 while(1)
 {
 	 printf("Se encuentra en el menu principal del juego, eliga una de las opciones siguientes: \n");
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
	    {printf("Preparese para configurar su juego...\n\n");
	    printf("Escoja un número de jugadores entre 2 y 6 jugadores.\n\n");
          int n;
          scanf("%i", &n);
          switch(n)
           {
            case 2:
                printf("El número de jugadores es 2.\n\n");
                    char jugador1[50], jugador2[50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf("%s %s", jugador1, jugador2);
                    printf("Los nombres de los jugadores son: jugador1: %s y jugador2: %s.\n\n", jugador1, jugador2);

                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 2, i;

                    bool deck[4][13] = {false};

                    for ( i = 1; i <= num; i++)
                    {
                    printf("Mano de jugador  %d es:\n",i);
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
                    }


                    }

                break;
            case 3:
                printf("El número de jugadores es 3.\n\n");
                    char jugador11[50], jugador22[50], jugador3[50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf("%s %s %s", jugador11, jugador22, jugador3);
                    printf("Los nombres de los jugadores son: jugador1: %s, jugador2: %s y jugador3: %s.\n\n", jugador11, jugador22, jugador3);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 2, i;

                    bool deck[4][13] = {false};

                    for ( i = 1; i <= num; i++)
                    {
                    printf("Mano de jugador  %d es:-\n",i);
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
                    }


                    }

                break;
            case 4:
                printf("El número de jugadores es 4.\n\n");
                    char jugador111[50], jugador222[50], jugador33[50], jugador4[50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf("%s %s %s %s", jugador111, jugador222, jugador33, jugador4);
                    printf("Los nombres de los jugadores son: jugador1: %s, jugador2: %s, jugador3: %s, jugador4: %s.\n\n", jugador111, jugador222, jugador33, jugador4);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 4, i;

                    bool deck[4][13] = {false};

                    for ( i = 1; i <= num; i++)
                    {
                    printf("Mano de jugador  %d es:-\n",i);
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
                    }


                    }

                break;
            case 5:
                printf("El número de jugadores es 5.\n\n");
                    char jugador1111[50], jugador2222[50], jugador333[50], jugador44[50], jugador5[50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf("%s %s %s %s %s", jugador1111, jugador2222, jugador333, jugador44, jugador5);
                    printf("Los nombres de los jugadores son: jugador1: %s, jugador2: %s, jugador3: %s, jugador4: %s, jugador5: %s.\n\n", jugador1111, jugador2222, jugador333, jugador44, jugador5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 5, i;

                    bool deck[4][13] = {false};

                    for ( i = 1; i <= num; i++)
                    {
                    printf("Mano de jugador  %d es:-\n",i);
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
                    }


                    }

                break;
            case 6:
                printf("El número de jugadores es 6.\n\n");
                    char jugador11111[50], jugador22222[50], jugador3333[50], jugador444[50], jugador55[50], jugador6[50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf("%s %s %s %s %s %s", jugador11111, jugador22222, jugador3333, jugador444, jugador55, jugador6);
                    printf("Los nombres de los jugadores son: jugador1: %s, jugador2: %s, jugador3: %s, jugador4: %s, jugador5: %s, jugador6: %s.\n\n", jugador11111, jugador22222, jugador3333, jugador444, jugador55, jugador6);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 6, i;

                    bool deck[4][13] = {false};

                    for ( i = 1; i <= num; i++)
                    {
                    printf("Mano de jugador  %d es:-\n",i);
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
                    }


                    }

                break;
            default:
                printf("El número de jugadores introducido no es válido.\n\n");
                break;
           }

	   } break;
	case 3:
	    printf("Vuelva pronto \n");
		exit(0);
		break;
 }

 }
}
