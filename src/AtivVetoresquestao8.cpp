//Atividade vetores questao 8

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {

	int A[5], B[5], C[5], D[15], i, j;

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
	
	cout << " Digite os 5 numeros do vetor C apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 5; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido : " << endl;
		cin >> C[i];
	}


	cout << "O vetor D tem os valores: " << endl;

	D[0] = A[0];
	D[1] = A[1];
	D[2] = A[2];
	D[3] = A[3];
	D[4] = A[4];

	D[5] = B[0];
	D[6] = B[1];
	D[7] = B[2];
	D[8] = B[3];
	D[9] = B[4];

	D[10] = C[0];
	D[11] = C[1];
	D[12] = C[2];
	D[13] = C[3];
	D[14] = C[4];
	


		for (i = 0; i < 15; i++) {
			cout << D[i] << endl;
		}

	return 0;
}
