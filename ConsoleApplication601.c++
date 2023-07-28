#include <iostream>
using namespace std;

int min(int a, int b, int c, int d) {
    int minimum;
    if (a <= b && a <= c && a <= d) {
        minimum = a;
    }
    else if (b <= a && b <= c && b <= d) {
        minimum = b;
    }
    else if (c <= a && c <= b && c <= d) {
        minimum = c;
    }
    else if (d <= a && d <= b && d <= c) {
        minimum = d;
    }
    return minimum;

}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);
    return 0;
}
