//C++プログラミング応用演習2
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値.

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
	if (ans == nth_prime(a, d, n)) {
		std::cout << "出力結果と正解は一致しました" << std::endl;
	} else {
		std::cout << "出力結果と正解は一致しませんでした" << std::endl;
	}
}

int main() {
	std::cout << nth_prime(367, 186, 151) << std::endl;
	std::cout << nth_prime(179, 10, 203) << std::endl;
	std::cout << nth_prime(271, 37, 39) << std::endl;
	std::cout << nth_prime(103, 230, 1) << std::endl;
	std::cout << nth_prime(27, 104, 185) << std::endl;
	std::cout << nth_prime(253, 50, 85) << std::endl;
	std::cout << nth_prime(1, 1, 1) << std::endl;
	std::cout << nth_prime(9075, 337, 210) << std::endl;
	std::cout << nth_prime(307, 24, 79) << std::endl;
	std::cout << nth_prime(331, 221, 177) << std::endl;
	std::cout << nth_prime(259, 170, 40) << std::endl;
	std::cout << nth_prime(269, 58, 102) << std::endl;

	nth_prime_test(92808, 367, 186, 151);
	nth_prime_test(92809, 367, 186, 151);

	int hoge;
	std::cin >> hoge;
	return 0;
}