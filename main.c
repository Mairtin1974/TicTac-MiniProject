#include <stdio.h>
#include <stdlib.h>

int main() {

	int X;
	int comp;
	char array[9]={'1','2','3','4','5','6','7','8','9'};


	printf("Compueters go!!");
	comp = rand() % 9 + 1;
	printf("%i", comp);



	return 0;
}