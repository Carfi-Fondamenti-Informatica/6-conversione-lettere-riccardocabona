#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char b = 0;
    cin >> b;
    if (lettera(b) ==true) {
        cout << b;
    } else {
        cout << "errore";
    }
    return 0;
}
