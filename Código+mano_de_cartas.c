#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

void opcion_a(void);
void opcion_b(void);
void temp(int n);
int main()
{
 int a  ;
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
	    {printf("Preparese para configurar su juego...\n\n");
	    printf("Escoja un número de jugadores entre 2 y 6.\n\n");
          int n;
          scanf("%i", &n);
          switch(n)
           {
               case 2:
                    printf("El número de jugadores es 2.\n\n");
                    char jugadores[2][50];//Esta variable almacena el nombre de los jugadores
                   {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf(" %s", jugadores[0]);
                    scanf(" %s", jugadores[1]);
                    printf("Prepárense para recibir sus cartas...\n\n");

                    temp(5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 2, i;

                    bool deck[4][13] = {false};

                    system("cls");//borra todo lo anterior impreso en pantalla

                    for ( i = 0; i < num; i++)
                    {
                        printf("Mano de %s es:\n",jugadores[i]);
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
                            temp(i);
                            system("cls");
                    }
                    }

                break;
            case 3:
                    printf("El número de jugadores es 3.\n\n");
                    char jugadores1[3][50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf(" %s", jugadores1[0]);
                    scanf(" %s", jugadores1[1]);
                    scanf(" %s", jugadores1[2]);
                    printf("Prepárense para recibir sus cartas...\n\n");

                    temp(5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'1','2','3','4','5','6','7','8','9','10','J', 'Q', 'K', 'A'};

                    int num = 3, i;

                    bool deck[4][13] = {false};
                    system("cls");

                    for ( i = 0; i < num; i++)
                    {
                        printf("Mano de %s es:\n",jugadores1[i]);
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
                            temp(i);
                            system("cls");
                    }
                    }

                break;
            case 4:
                    printf("El número de jugadores es 4.\n\n");
                    char jugadores2[4][50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf(" %s", jugadores2[0]);
                    scanf(" %s", jugadores2[1]);
                    scanf(" %s", jugadores2[2]);
                    scanf(" %s", jugadores2[3]);
                    printf("Prepárense para recibir sus cartas...\n\n");

                    temp(5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 4, i;

                    bool deck[4][13] = {false};
                    system("cls");

                    for ( i = 0; i < num; i++)
                    {
                        printf("Mano de %s es:\n",jugadores2[i]);
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
                            temp(i);
                            system("cls");
                    }
                    }

                break;
            case 5:
                    printf("El número de jugadores es 5.\n\n");
                    char jugadores3[5][50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf(" %s", jugadores3[0]);
                    scanf(" %s", jugadores3[1]);
                    scanf(" %s", jugadores3[2]);
                    scanf(" %s", jugadores3[3]);
                    scanf(" %s", jugadores3[4]);

                    printf("Prepárense para recibir sus cartas...\n\n");

                    temp(5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 5, i;

                    bool deck[4][13] = {false};
                    system("cls");

                    for ( i = 0; i < num; i++)
                    {
                        printf("Mano de %s es:\n",jugadores3[i]);
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
                            temp(i);
                            system("cls");
                    }
                    }

                break;
            case 6:
                    printf("El número de jugadores es 6.\n\n");
                    char jugadores4[6][50];
                    {printf("Escribe el nombre de cada jugador.\n\n");
                    scanf(" %s", jugadores4[0]);
                    scanf(" %s", jugadores4[1]);
                    scanf(" %s", jugadores4[2]);
                    scanf(" %s", jugadores4[3]);
                    scanf(" %s", jugadores4[4]);
                    scanf(" %s", jugadores4[5]);

                    printf("Prepárense para recibir sus cartas...\n\n");

                    temp(5);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    int num = 6, i;

                    bool deck[4][13] = {false};
                    system("cls");
                    for ( i = 0; i < num; i++)
                    {
                        printf("Mano de %s es:\n",jugadores4[i]);
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
                            temp(i);
                            system("cls");
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
void temp(int n)//Función que permite que las cartas sean visibles solo 7 segundos, y de esta forma no ver las cartas de los contrincantes
{
    int seg=0, min=0;

    while(seg<7){
        seg++;
        if(seg==60){
            seg=0;
            min++;
            if (min==60){
                min=0;
            }
        }
        Sleep (1000);
        }

}
