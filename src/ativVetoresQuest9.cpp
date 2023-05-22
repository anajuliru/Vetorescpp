//Atividade vetores questao 9

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {

	int a, i, A[10];

	cout << "O digite o numero escolhido para a tabuada: " << endl;
	cin >> a;

	A[0] = 1 * a;
	A[1] = 2 * a;
	A[2] = 3 * a;
	A[3] = 4 * a;
	A[4] = 5 * a;
	A[5] = 6 * a;
	A[6] = 7 * a;
	A[7] = 8 * a;
	A[8] = 9 * a;
	A[9] = 10 * a;

	for (i = 0; i < 10; i++) {
		cout << i + 1 << " x " << a << " = " << A[i] << endl;

	}



	return 0;
}