//Atividade vetores questao 8

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {

	int A[10], i;

	cout << " Digite os 10 numeros do vetor A apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 10; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido : " << endl;
		cin >> A[i];
	}

	cout << "Os valores do vetor A sao:" << endl;

	for (i = 0; i < 10; i++) {
		cout << A[i] << endl;
	}


	return 0;
}