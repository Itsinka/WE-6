#include <iostream>
#include <string>
using namespace std;

int b(int x, int y)

{
    if (x > y)
    {
        cout << "Number of positives in the second array is greater";
    }
    else if (x < y)
    {
        cout << "Number of positives in the first array is greater";
    }
    else if (x == y)
    {
        cout << "Numbers are equal";
    }
    return 0;
}



int main() {
    int z, j[100], k[100], x, y;
    cin >> z;
    for (int i = 0; i < z; i++) {
        cin >> j[i];
    }
    for (int i = 0; i < z; i++) {
        cin >> k[i];
    }
    for (int i = 0; i < z; i++) {
        if (j[i] < 0) {
            x++;
        }
        if (k[i] < 0) {
            y++;
        }
    }
    b(x, y);

    return 0;
}


