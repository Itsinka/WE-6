#include <iostream>
#include <cstring>
using namespace std;
void convert(char str[100]) {
    int strlength = strlen(str);
    for (int i = 0;i < strlength;i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}
int main() {
    char str[100];
    cin >> str;
    convert(str);
    cout << str;
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


