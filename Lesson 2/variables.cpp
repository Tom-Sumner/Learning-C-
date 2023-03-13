#include <iostream>
// Swapping variables excersize
int func2() {
    int var1 = 100;
    int var2 = 200;
    int temp = var1;
    var2 = var1;
    var1 = temp;
    std::cout << var1;
    return 0;
}