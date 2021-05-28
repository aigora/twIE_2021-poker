Carta = cartas();

void ClasificarCartas(Carta * cartas, int num){
	qsort(cartas, num, sizeof(Carta), comparaCartas);
}

int MismoRango(int num, Carta* cartas){

	int i;
	for (i = 1; i < num; i++){
		if (cartas[i-1].rango != cartas[i].rango){
			return 0;
		}
	}

	void ClasificarCartas(Carta * cartas, int num){
	qsort(cartas, num, sizeof(Carta), comparaCartas);
}
	return 1;

	int CompararCartas(const void * val1, const void * val2){
	Carta * carta1 = (carta *) val1;
	arta * carta2 = (carta *) val2;
	int result = carta1->rank - carta2->rank;
	if (result == 0) {
		result = carta1->palo - carta2->carta;
	}
	return result;
}

void imprimircartas (Carta * cartas, int num){

	char* Palos [] = {"Corazones", "Diamantes", "Espadas", "Treboles"};
	char* RangoNumeros [] = {"Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "J", "Q", "K", "As"};
	int i = 0;
	while (i < num){
		printf("%s de %s\n", RangoNumeros[cartas[i].rango], Palos[cartas[i].Palos]);
		i++;
	}
void ImprimirMano(Mano * mano){

	char* RangoNumeros [] = {"Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "J", "Q", "K", "As"};
	char* combinaciones [10] = {"Carta Alta", "pareja", "Doble Pareja",
		"Tercia", "Escalera", "Escalera Color", "Full house",
		"Cuarteto", "Escalera de 5", "Escalera Color de 5"};
	char alph[5] = {'a','b','c','d','e'};
	int i;
	for (i = 0; i < 5; i++){
		printf("%c - ", alph[i]);
		imprimircartas(&mano->cartas[i], 1);
	}
	printf("Mano: %s - %s\n", combinaciones[mano->combinaciones], RangoNumeros[mano->valor[0]]);
}
void AsignacionRangos(Mano * mano){
	if (mano->combinaciones == 7 || mano->combinaciones == 6){

		mano->[0] = mano->cartas[2].rango;

    	if (mano->cartas[2].rango != mano->cartas[0].rango){
    		mano->valor[1] = mano->cartas[0].rango;
    	}
    	else {
    		mano->valor[1] = mano->cartas[4].rango;
    	}
    	mano->valor[2] = 0;
    	mano->valor[3] = 0;
    	mano->valor[4] = 0;
	}
	else if (mano->combinaciones == 2 || mano->combinaciones == 3){
		if (mano->combinaciones == 3){
			ordinal rango */
			mano->valor[0] = mano->cartas[2].rango;
			of a kind rango is the largest Carta in the hand */
			if (mano->cartas[2].rango != mano->cartas[1].rango){
				mano->valor[1] = mano->cartas[1].rango;
				mano->valor[2] = mano->cartas[0].rango;
			}
			else if (mano->cartas[2].rango != mano->cartas[3].rango){
				mano->valor[1] = mano->cartas[4].rango;
				mano->valor[2] = mano->cartas[3].rango;
			}
			else {
				mano->valor[1] = mano->cartas[4].rango;
				mano->valor[2] = mano->cartas[0].rango;
			}
		}
		else if (mano->combinaciones == 2) {
			if (mano->cartas[4].rango == mano->cartas[3].rango){
				mano->valor[0] = mano->cartas[4].rango;
				if (mano->cartas[2].rango == mano->cartas[1].rango){
					mano->valor[1] = mano->cartas[2].rango;
					mano->valor[2] = mano->cartas[0].rango;
				}
				else {
					mano->valor[1] = mano->cartas[1].rango;
					mano->valor[2] = mano->cartas[2].rango;
				}
			}
			else {
				mano->valor[0] = mano->cartas[3].rango;
				mano->valor[1] = mano->cartas[1].rango;
				mano->valor[2] = mano->cartas[4].rango;
			}
		}
		mano->valor[3] = 0;
		mano->valor[4] = 0;
	}
	else if (mano->combinaciones == 1){
		int nopareja = 1;
		int i = 0;
		while (nopareja) {
			if (mano->cartas[i].rango == mano->cartas[i + 1].rango){
				nopareja = 0;
				mano->valor[0] = mano->cartas[i].rango;
			}
			i++;
		}
		if (i == 4){
			mano->valor[1] = mano->cartas[2].rango;
			mano->valor[2] = mano->cartas[1].rango;
			mano->valor[3] = mano->cartas[0].rango;
		}
		if (i == 3){
			mano->valor[1] = mano->cartas[4].rango;
			mano->valor[2] = mano->cartas[1].rango;
			mano->valor[3] = mano->cartas[0].rango;
		}
		if (i == 2){
			mano->valor[1] = mano->cartas[4].rango;
			mano->valor[2] = mano->cartas[3].rango;
			mano->valor[3] = mano->cartas[0].rango;
		}
		if (i == 1){
			mano->valor[1] = mano->cartas[4].rango;
			mano->valor[2] = mano->cartas[3].rango;
			mano->valor[3] = mano->cartas[2].rango;
		}
		mano->valor[4] = 0;
	}
	else {
		if ((mano->combinaciones == 8 || mano->combinaciones == 4) &&
			(mano->cartas[3].rango == 4 && mano->cartas[4].rango == 13)){
			mano->valor[4] = 0;
			mano->valor[0] = mano->cartas[3].rango;
			mano->valor[1] = mano->cartas[2].rango;
			mano->valor[2] = mano->cartas[1].rango;
			mano->valor[3] = mano->cartas[0].rango;
		}
		else {
			mano->valor[0] = mano->cartas[4].rango;
			mano->valor[1] = mano->cartas[3].rango;
			mano->valor[2] = mano->cartas[2].rango;
			mano->valor[3] = mano->cartas[1].rango;
			mano->valor[4] = mano->cartas[0].rango;
		}
	}
}

int Puntuaciondemano(Mano * mano){
	ClasificarCartas(mano->cartas, 5);
    int esEscaleraColor = 1;
    int i;
    for (i = 1; i < 5; ++i){
    	if (mano->cartas[i].palo != mano->cartas[0].carta){
    		esEscaleraColor = 0;
    	}
    }
    if (MismoRango(4, &mano->cartas[0]) || MismoRango(4, &mano->cartas[1])){
    	mano->combinaciones = 7;
    }
    else if ((MismoRango(3, &mano->cartas[0]) && MismoRango(2, &mano->cartas[3])) || (MismoRango(2, &mano->cartas[0]) && MismoRango(3, &mano->cartas[2]))){
    	mano->combinaciones = 6;
    }
    else if (MismoRango(3, &mano->cartas[0]) || MismoRango(3, &mano->cartas[1]) || MismoRango(3, &mano->cartas[2])){
    	mano->combinaciones = 3;
    }
    else if ((MismoRango(2, &mano->cartas[0]) && (MismoRango(2, &mano->cartas[2]) || MismoRango(2, &mano->cartas[3]))) ||
    		(MismoRango(2, &mano->cartas[1]) && MismoRango(2, &mano->cartas[3]))) {
    	mano->combinaciones = 2;
    }
    else {
    	int esEscalera = 0;
    	mano->combinaciones = 0;

    	for (i = 0; i < 4; i++){
    		if (MismoRango(2, &mano->cartas[i])) {
    			mano->combinaciones = 1;
    		}
    	}
    	if (mano->combinaciones == 0 && (mano->cartas[4].rango - mano->cartas[0].rango == 4
    			|| (mano->cartas[4].rango == 13 && ((mano->cartas[3].rango - mano->cartas[0].rango == 3) && mano->cartas[0].rango == 1)))) {
    		esEscalera = 1;
    	}
    	if ((esEscaleraColor && esEscalera) && mano->cartas[3].rango == 12){
    		mano->combinaciones = 9;
    	}
    	else if (esEscaleraColor && esEscalera){
    		mano->combinaciones = 8;
    	}
    	else if (esEscaleraColor){
    		mano->combinaciones = 5;
    	}
    	else if (esEscalera){
    		mano->combinaciones = 4;
    	}
    }
    assignvalor(mano);
	mano->puntuacion = (13 * mano->combinaciones) + mano->valor[0];
	return mano->puntuacion;
}
