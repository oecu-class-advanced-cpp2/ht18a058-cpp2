#include <iostream>
#include <string>
#include <sstream>

namespace cpp2 {
    class mcxi {
    public:
        mcxi(const std::string& s) : value_(0) {
            int digit = 0;
            for (auto pos = s.begin(); pos != s.end(); ++pos) {
                if (*pos >= '2' && *pos <= '9') {
                    digit = *pos - '0';
                }
                else {
                    auto u = unit(*pos);
                    value_ += std::max(digit, 1) * u;
                    digit = 0;
                }
            }
        };

        mcxi operator+(const mcxi& rhs) {
            mcxi dest(*this);
            dest.value_ += rhs.value_;
            return dest;
        };

        std::string to_string() const {

            std::stringstream ss;
            int num = 0;
            num = value_;
            if (num >= 1000) {
                int M = num / 1000;
                if (M == 1) {
                    ss << 'm';
                }
                if (M > 1) {
                    ss << M;
                    ss << 'm';
                }
                num = num - M * 1000;
            }
  
            if (num >= 100) {
                int C = num / 100;
                if (C == 1) {
                    ss << 'c';
                }
                if (C > 1) {
                    ss << C;
                    ss << 'c';
                }
                num = num - C * 100;
            }
            
            if (num >= 10) {
                int X = num / 10;
                if (X == 1) {
                    ss << 'x';
                }
                if (X > 1) {
                    ss << X;
                    ss << 'x';
                }
                num = num - X * 10;
            }

            if (num == 1) {
                    ss << 'i';
                }
                if (num > 1) {
                    ss << num;
                    ss << 'i';
                }
                return ss.str();
        }

    private:
        int unit(char c) {
            switch (c) {
            case 'm': return 1000;
            case 'c': return 100;
            case 'x': return 10;
            case 'i': return 1;
            }
        };

        int value_{
        };
    };
}

int main() {
	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
	auto result0 = a0 + b0;
	std::cout << "3x" << " " << result0.to_string() << std::endl;

	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	auto result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;

	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	auto result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;

	cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	auto result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	auto result4 = a4 + b4;
    std::cout << "m" << " " << result4.to_string() << std::endl;

	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	auto result5 = a5 + b5;
    std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;

	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	auto result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;

	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	auto result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;

	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	auto result8 = a8 + b8;
    std::cout << "mx" << " " << result8.to_string() << std::endl;

	cpp2::mcxi a9("9m8c7xi");
	cpp2::mcxi b9("c2x8i");
	cpp2::mcxi result9 = a9 + b9;
    std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;

    std::cin.get();
}