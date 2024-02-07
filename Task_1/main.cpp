#include <iostream>
#include <cmath>
#include <vector>
#ifdef USE_FLOAT_ARRAY
typedef float arrayType;
#else
typedef double arrayType;
#endif


int main() {
    const int N = 10000000;
    arrayType pi = acos(-1.0);;

    std::vector<arrayType> sinValues(N);
    for (int i = 0; i < N; ++i) {
        arrayType angle = 2*pi * i / N;
        sinValues[i] = sin(angle);
    }
    arrayType sumValues = 0.0;
    for (arrayType value:sinValues) {
        sumValues+= value;
    }
    std::cout<< sumValues << std::endl;
    return 0;
}
