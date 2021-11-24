#include "A.hpp"

template<int I, typename T=A<I>>
struct B {
    constexpr B(){};
    using data = T;
};
