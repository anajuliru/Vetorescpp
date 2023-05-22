//Atividade vetores questao 3

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {

	int A[20], B[20], i, C[20], sub;

	cout << " Digite os 20 numeros do vetor A apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 20; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido " << endl;
		cin >> A[i];
	}

	cout << " Digite os 20 numeros do vetor B apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 20; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido " << endl;
		cin >> B[i];
	}

	for (i = 0; i < 20; i++) {
		sub = A[i] - B[i];
		cout << "O resultado da subtracao de " << A[i] << "-" << B[i] << " = " << sub << endl;

	}


	return 0;
}