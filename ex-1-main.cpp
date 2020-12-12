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

bool is_prime(int num) {
	if (num == 1) {
		return false;
	}
	for (int i = 2; i <= num - 1; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int imax = (CPP2_PRIME_UPPER_LIMIT - a) / d + 1;
	int count = 0;
		for (int i = 0; i < imax; i++) {
			int N = a + i * d;
			if (is_prime(N) == true) {
				count += 1;
			}
			if (count == n) {
				return N;
			}
		}
		return 0;
}

void nth_prime_test(unsigned int ans, unsigned int a, unsigned int d, unsigned int n) {
	int imax = (CPP2_PRIME_UPPER_LIMIT - a) / d + 1;
	int count = 0;
	for (int i = 0; i < imax; i++) {
		int N = a + i * d;
		if (is_prime(N) == true) {
			count += 1;
		}
		if (count == n) {
			std::cout << N <<std::endl;
			if (N == ans) {
				std::cout << "�o�͌��ʂƐ����͈�v���܂����D" << std::endl;
			}
			else {
				std::cout << "�o�͌��ʂƐ����͈�v���܂���ł����D" << std::endl;
			}
		}
	}
}

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;

	nth_prime_test(92809, 367, 186, 151);
	int hoge;
	std::cin >> hoge;
	return 0;
}