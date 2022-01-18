#include <iostream>

int main() {
    // 2147483647
    for (signed int i = 2147483640; i > 0; ++i) {
        std::cout << i << std::endl;
        // if (i > 32000) {
        //     std::cout << i << std::endl;
        // }
    }
}
