#include <iostream>
#include <string>
#include <cstring>
using namespace std;
const int  maxn = 200;

char* function(char a[maxn])
{
    int x = strlen(a);
    for (char i = 0; i < x; i++)
    {
        if (a[i] >= 'a' && 'z' >= a[i])
            a[i] = a[i] - 32;
        else if (a[i] >= 'A' && 'Z' >= a[i])
            a[i] = a[i] + 32;
    }
    return a;
}

int main() {
    char a[maxn];
    cin >> a;
    cout << function(a);
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


