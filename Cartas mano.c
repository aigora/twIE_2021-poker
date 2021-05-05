#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<time.h>

int main()
{
  

srand(time(0));

char palo[4][10] = {"Treboles", "Diamantes", "Corazones", "Espadas"};
char cara[3] = {'J', 'Q', 'K'};

int num, i;
printf("Numero de jugadores = ");
scanf("%d", &num);

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

return 0;
}
