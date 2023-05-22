//Atividade vetores questao 12

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {

	int A[5], B[5], i, j;

	cout << " Digite os 5 numeros do vetor A apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 5; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido : " << endl;
		cin >> A[i];
	}

	cout << " Digite os 5 numeros do vetor B apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 5; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido : " << endl;
		cin >> B[i];
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (A[i] = B[j]) {
				cout << A[i] << endl;
			}
			else {
				return 0;
			}
		}
	}


	return 0;
}