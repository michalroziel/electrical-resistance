#include <stdio.h>
#include "formulas.h"


	float computeParallelResistance(int restistanceAmount) {

		int input;
		int resistanceSum;

		for (int i=0; i < restistanceAmount; i++) {



		}




	}





	void start(void){
	int loopW = 0 ;
	int loopS = 0;
	int n;
	char schaltung;

	while(loopW==0){
	int inputW;
	printf("Bitte geben Sie die Anzahl der Widerstände  an : \n " );

	scanf("%d", &inputW );

	if (inputW<= 0){		
	printf("Die anzahl der Widerstände kann nicht kleiner oder gleich 0 sein! \n Bitte geben Sie etwas anderes an!");
		}

	else{
	loopW = 1;
	n = inputW;
		}
	}

	printf("Die Anzahl Der Widerstände beträgt : %d \n" , n); 

	printf("Bitte geben Sie die Art der Schaltung an : \n  \n P = Parallel\n S = Seriell\n" );


	while(loopS==0) {
	char inputS;

		scanf(" %c", &inputS );

		switch (inputS) {
			case 'S':
				schaltung = 'S';
				loopS = 1;
				break;
			case 'P':
				schaltung = 'P';
				loopS = 1;
				break;
			default:
				printf("Ungültige Eingabe. ");
		}

	}

		printf("Die Art der Ausgewählten Schaltung ist : %c", schaltung);
	
}
