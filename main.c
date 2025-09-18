#include <stdio.h>
#include <stdbool.h>


/*
bool AND (bool A, bool B) {
	bool C;
	if ((A == true) && (B == true))
		C = true;
	else
		C = false;
	return C;
}

bool OR (bool A, bool B) {}

bool XOR (bool A, bool B) {}

bool NOT (bool A) {}
*/


int bto (bool A) {
	if (A == true)
		printf("C = true\n");
	else
		printf("C = false\n");
	return 0;
}


bool atb () {
	int i;
	bool A;
	scanf("%d", &i);
	printf("%d\n", i);
	if (i == 0)
		A = false;
	else if (i == 1)
		A = true;
	else 
		break
	return A;
}

int main() {

	bto(atb());

	/*
	bool A = true;
	bool B = true;
	
	bto(AND(A, B));
	*/
	return 0;
}

