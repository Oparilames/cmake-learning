#include <iostream>
// try to call print funct
template <int T>
struct A {
	A() = delete;
	A(const A&) = delete;
	A(A&&) = delete;

    static constexpr void print() { std::cout << T << "   It works.\n"; }
};
