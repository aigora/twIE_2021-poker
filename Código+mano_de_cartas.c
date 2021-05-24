#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "temp.h"

typedef struct{
    char nombre[30];
    int apuestainicial;
}usuario;

void temp(int n);
int main()
{
 int a, njugadores,longiN,i;
 usuario jugador[100];
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
                    printf("Escribe el nombre del jugador %d (30 caracteres como maximo):",i+1);
                    scanf("%s",jugador[i].nombre);
		            longiN=strlen(jugador[i].nombre);
		        }while(longiN>30);
	        }
        printf("Prepárense para recibir sus cartas...cada jugador dispone de 5 segundos para visualizarlas\n\n");

                    temp(7);
                    srand(time(0));

                    char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
                    char cara[3] = {'J', 'Q', 'K'};

                    bool deck[4][13] = {false};

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
                    }
	    break;
	case 3:
	    printf("Vuelva pronto \n");
		exit(0);
		break;
 }

 }
 }

