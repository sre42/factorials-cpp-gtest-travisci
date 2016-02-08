//main.cpp

#include <iostream>
#include "factorial.h"

using namespace std;

int main(int argc, char **argv) {
    int n = 4;
    cout << "factorial(" << n << "): "
    << factorial(n) << endl;
    return 0;
}