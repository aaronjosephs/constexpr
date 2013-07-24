#include <iostream>
#include <string>
namespace awesome {
    template <typename NumberType>
    constexpr NumberType sqrt(NumberType number, NumberType guess, NumberType precision) {
        return (guess * guess >= (number-precision))&&(guess * guess <= (number+precision)) ? guess : sqrt(number,(guess + (number / guess)) / 2,precision);
    }
    template <typename NumberType>
    constexpr NumberType sqrt(NumberType number,NumberType precision = 0.0000001) {
        return sqrt(number,number /10.0,precision);
    }
}

int main() {
    using awesome::sqrt;
    std::string s;// = 5435.3924;
    double x;
    while ( true ) {
        std::cin >> s;
        x = std::stod(s);
        if (x < 0) break;
        std::cout <<"Square root of: " << x << " " << sqrt<long double>(x)  << '\n';
    }
    return 0;
}
