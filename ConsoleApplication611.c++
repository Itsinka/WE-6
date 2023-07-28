#include <iostream>  
#include <cstring>  
using namespace std;
const int N = 200;

void countOccurrence(int n) {
    char str[N], ch;
    cin >> ch >> str;
    int counter = 0, arrsize = strlen(str);
    for (int i = 0; i < arrsize; ++i)
        if (str[i] == ch)
            counter++;

    if (n - 1 > 0)
        countOccurrence(n - 1);
    cout << counter << " " << ch << " in " << str << endl;
}

int main() {
    int n;
    char ch, str[N];
    cin >> n;
    countOccurrence(n);
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


