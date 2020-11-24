//C++プログラミング応用演習2
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */

bool is_prime(int num) {
	for (int i = 2; i <= num - 1; i++) {
		if (num % i == 0) {
			return false;
		} {
			return true;
		}
	}
}

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
	// 以下、同様に、入出力例通りになるか確認せよ。
	int hoge;
	std::cin >> hoge;
	return 0;
}