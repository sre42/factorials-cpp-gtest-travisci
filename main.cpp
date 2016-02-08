//main.cpp

#include <iostream>
#include "factorial.h"

using namespace std;

//in test1
int main(int argc, char **argv) {
    int n;
    cout << "Please Enter the factorial you wish to find:";
    cin >> n;
    cout << "factorial(" << n << "): " << factorial(n) << endl;
    return 0;
}