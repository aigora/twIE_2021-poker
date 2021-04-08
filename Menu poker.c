#include <stdio.h>
#include <stdlib.h>
void opcion_a(void);
void opcion_b(void);
int main()
{
 int a  ;
 FILE *Instrucciones;
  
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
 		Instrucciones=fopen("Instrucciones.txt","r");
 		break;
 	case 2:
	    printf("Preparese para configurar su juego...");
	    //Aqui iria el resto del programa
	    break;
	case 3:
	    printf("Vuelva pronto \n");
		exit(0);
		break;	
 }
	
 }
}
