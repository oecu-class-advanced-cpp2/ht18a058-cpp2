//C++�v���O���~���O���p���K2
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
*/
/* -------------------------------------------------------------- */
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int imax = (CPP2_PRIME_UPPER_LIMIT - a) / d + 1;
	int array[n];
	for (int i = 0; i < imax; i++) {
		int N = a + i * d;
		for (int d = 2; d < N; d++) {
			if (N % d == 0) {
				N == array[];
			}
	  }
	}
	return 0;
}

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	int hoge;
	std::cin >> hoge;
	return 0;
}