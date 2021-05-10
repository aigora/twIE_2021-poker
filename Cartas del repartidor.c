int elecc[5][2];
int i, j, paloI, caraI, dup;
  
printf("Si quieres ver las primeras 3 cartas pulsa ENTER.");
getchar();
for(i = 0; i < 3; i++){
do{
paloI = rand() % 4;
caraI = rand() % 3;
dup = 0;
for(j = 0; j < i; j++){
if(paloI == elecc[j][0] && caraI == elecc[j][1]){
dup = 1;
break;
}
}
}while(dup != 0);
elecc[i][0] = paloI;
elecc[i][1] = caraI;
}
printf("\n");
for(i = 0; i < 3; i++){
printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
}
  
printf("\n\nSi quieres añadir otra carta pulsa ENTER");
getchar();
do{
paloI = rand() % 4;
caraI = rand() % 3;
dup = 0;
for(j = 0; j < 4; j++){
if(paloI == elecc[j][0] && caraI == elecc[j][1]){
dup = 1;
break;
}
}
}while(dup != 0);
elecc[3][0] = paloI;
elecc[3][1] = caraI;
printf("\n");
for(i = 0; i < 4; i++){
printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
}
  
printf("\n\nSi quieres añadir la ultima carta pulsa ENTER");
getchar();
do{
paloI = rand() % 4;
caraI = rand() % 3;
dup = 0;
for(j = 0; j < 3; j++){
if(paloI == elecc[j][0] && caraI == elecc[j][1]){
dup = 1;
break;
}
}
}while(dup != 0);
elecc[4][0] = paloI;
elecc[4][1] = caraI;
printf("\n");
for(i = 0; i < 5; i++){
printf("%s-%c\t", palo[elecc[i][0]], cara[elecc[i][1]]);
}
printf("\n\n");
  
return 0;
}
