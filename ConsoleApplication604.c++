#include <iostream>
#include <cmath>
using namespace std;
bool election(bool x, bool y, bool z) {
    int a = 0, b = 0;
    if (x == true) {
        a++;
    }
    else {
        b++;
    }
    if (y == true) {
        a++;
    }
    else {
        b++;
    }
    if (z == true) {
        a++;
    }
    else {
        b++;
    }
    if (a > b) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    bool x, y, z;
    cin >> x >> y >> z;
    cout << election(x, y, z);
    return 0;
}

