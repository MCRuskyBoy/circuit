#include <stdio.h>
#include <stdbool.h>



bool AND (bool A, bool B) {
	bool C;
	if ((A == true) && (B == true))
		C = true;
	else
		C = false;
	return C;
}


bool OR (bool A, bool B) {
	bool C;
	if ((A == true) | (B == true))
		C = true;
	else
		C = false;
	return C;
}


bool XOR (bool A, bool B) {
	bool C;
	if ((A == false) && (B == true))
		C = true;
	else if ((A == true) && (B == false))
		C = true;
	else
		C = false;
	return C;
}


bool NOT (bool A) {
	bool C;
	if (A == 0)
		C = 1;
	else if (A == 1)
		C = 0;
	return C;
}


bool BUF (bool A) {
	bool C = A;
	return C;
}

int bto (bool A) {
	if (A == true)
		printf("true");
	else
		printf("false");
	return 0;
}


/*
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
		A = false;
	return A;
}
*/


bool halfADD (bool A, bool B, bool Cin) {
	bool step1D = AND(A, B);
	bool S = XOR(step1D, Cin);
	/*
	bool step2D1 = AND(Cin, step1D);
	bool step2D2 = AND(A, B);
	bool Cout = OR(step2D1, step2D2);
	*/
	return S;
}



int main() {
	//bool A = false, B = false;
	//bool A = false, B = true;
	bool A = true, B = false;
	//bool A = true, B = true;


	bool Cin = false



	printf("A[%d] B[%d]\tC[%d] AND\n", A, B, AND(A, B));
	printf("A[%d] B[%d]\tC[%d] OR\n", A, B, OR(A, B));
	printf("A[%d] B[%d]\tC[%d] XOR\n", A, B, XOR(A, B));
	printf("A[%d]\t\tC[%d] NOT\n", A, NOT(A));
	printf("A[%d]\t\tC[%d] BUF\n", A, BUF(A));


	printf("A[%d] B[%d] Cin[%d] 1bit ADD S[%d]\n", A, B, Cin, halfADD(A, B, Cin));


	return 0;
}

