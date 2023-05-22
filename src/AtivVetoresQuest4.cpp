//Atividade vetores questao 4  03/05

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {

	int A[15], B[15], i;

	cout << " Digite os 15 numeros apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 15; i++) {
		cout << " Digite o numero escolhido " << i + 1 << endl;
		cin >> A[i];
		B[i] = A[i] * A[i];
	}





	for (i = 0; i < 15; i++) {
		cout << "O valor de A[" << A[i] << "] ao quadrado eh igual a B[" << B[i] << "]" << endl;
	}


	return 0;
}