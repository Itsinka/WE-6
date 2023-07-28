#include <iostream>
using namespace std;

bool myXor(bool x, bool y) {
    int result = 1;
    if (x == 0 && y == 0) {
        result = 0;
    }
    else if (x == 1 && y == 1) {
        result = 0;
    }
    else if (x == 0 && y == 1) {
        result = 1;

    }
    else if (x == 1 && y == 0) {
        result = 1;
    }
    return result;
}

int main() {
    bool x;
    bool y;
    cin >> x >> y;
    cout << myXor(x, y);
    return 0;
}
