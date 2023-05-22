//Atividade vetores questao 10

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {

	int A[6], B[6], C[6], D[6], i, j, numA, numB;

	cout << "Digite os 6 valores do vetor A " << endl;
	for (i = 0; i < 6; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido : " << endl;
		cin >> A[i];
		}
	}
	
	for(i = 0; i < 6; i++) {
		if (A[i] % 2 != 0) {
			for (j = 0; j < 3; j++) {
				C[j] = A[i];
			}
		}
	}

	for (j = 0; j < 3; j++) {
		cout << C[j] << endl;
	}


	return 0;
}