//Atividade vetores questao 6  03/05

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(void) {

	int A[15], B[15], C[30], i;

	cout << " Digite os 15 numeros do vetor A apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 15; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido " << endl;
		cin >> A[i];
		
		
	}

	C[0] = A[0];
	C[1] = A[1];
	C[2] = A[2];
	C[3] = A[3];
	C[4] = A[4];
	C[5] = A[5];
	C[6] = A[6];
	C[7] = A[7];
	C[8] = A[8];
	C[9] = A[9];
	C[10] = A[10];
	C[11] = A[11];
	C[12] = A[12];
	C[13] = A[13];
	C[14] = A[14];
	

	cout << " Digite os 15 numeros do vetor B apertando em <ENTER> apos cada um" << endl;
	for (i = 0; i < 15; i++) {
		cout << " Digite o " << i + 1 << " numero escolhido " << endl;
		cin >> B[i];
		
		
	}

	C[15] = B[0];
	C[16] = B[1];
	C[17] = B[2];
	C[18] = B[3];
	C[19] = B[4];
	C[20] = B[5];
	C[21] = B[6];
	C[22] = B[7];
	C[23] = B[8];
	C[24] = B[9];
	C[25] = B[10];
	C[26] = B[11];
	C[27] = B[12];
	C[28] = B[13];
	C[29] = B[14];
	
	





	for (i = 0; i < 30; i++) {
		cout << "Oa valores do vetor C sao " << C[i] << endl;
	}

	return 0;
}