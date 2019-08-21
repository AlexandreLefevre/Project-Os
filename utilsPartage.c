double min(double a,double b){
		if(a > b){
			return b;
		}
		if(a < b){
			return a;
		}
		return a;
}


/**
*  Fonction qui procure le random
*/
int randomizer(int min,int max){
	int nombre_aleatoire = 0;
	srand(time(0)^(getpid()));				// "^" signifie XOR et "<<" signifie un décalage bit à bit
	nombre_aleatoire = rand()%(max-min)+min;
	return nombre_aleatoire;
}

/**
*
*/
double secteur(){
	usleep(12000);
	int min = 40000;
	int max = 50000;
	return ((double)randomizer(min,max)/(double)1000);
	
}

/**
*  Structure d'une voiture
*/
struct voiture{
	int ID;
	char nom;
	double S1;
	double S2;
	double S3;
	double tour;
	double meilleurS1;
	double meilleurS2;
	double meilleurS3;
	double meilleurTour;
	int numeroTour;
	int estCrash;
	int estPit;
	double tempsEcoule;
}voiture[20];


/**
* Generation du temps d'un pit
*/
int pit(){
	if(randomizer(0,18) == 5){
		return 1;		
	}
	else{
		return 0;
	}
}


/**
* Fonction qui determine si la voiture s'est crashee ou pas
*/
int crash(){
	if(randomizer(0,600) == 69){
		return 1;		
	}
	else{
		return 0;
	}
}
