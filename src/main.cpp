#include <iostream>
#include "BigInt.h"
#include "Prime.h"
#include "RSAEncrypter.h"

extern template class BigInt<2>;

using namespace std;
int main() {
//    const int64_t overflowMask = ((int64_t)1) << 63;
//    int64_t n = 0;
//    if (n & overflowMask) {
//        std::cout << "negative "<< std::endl;
//    } else {
//        std::cout << "positive"<< std::endl;
//    }

    srand(time(nullptr));
    for (int i = 0; i < 15; ++i) {
        cout << RSAEncrypter().N << endl;
    }
    return 0;

}