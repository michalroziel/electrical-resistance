#include <stdio.h>
#include "formulas.h"


	void start(void){

	int loopW = 0 ;

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


	
}
