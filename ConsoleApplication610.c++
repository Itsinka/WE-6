#include <iostream>  
#include <cstring>  
using namespace std;
const int N = 200;

int countOccurrence(char str[N], char ch) {
    int result = 0, arrlength = strlen(str);
    for (int i = 0; i < arrlength;i++) {
        if (str[i] == ch) {
            result++;
        }
    }
    return result;
}

int main() {
    int n;
    char ch, str[N];
    cin >> n;
    for (int i = n - 1;i >= 0;i--) {
        cin >> ch;
        cin >> str;
        cout << countOccurrence(str, ch) << " " << ch << " in " << str << endl;
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


