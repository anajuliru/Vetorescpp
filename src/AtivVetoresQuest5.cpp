//Atividade vetores questao 5  03/05

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(void) {

	int A[15], i, n,f, B[15];

	cout << " Digite os 15 numeros apertando em <ENTER> apos cada um" << endl;

	for (i = 0; i < 15; i++) {
		cout << " Digite o " << i + 1 << "º numero escolhido " << endl;
		cin >> A[i];

		for (n = 2; n <= i; n++) {
			f = n * (n - 1);
			B[i] = n;
		}

	}

	for (i = 0; i < 15; i++) {
		cout << B[i] << endl;
	}
		

	return 0;
}


