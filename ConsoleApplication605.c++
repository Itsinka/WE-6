#include <iostream>
using namespace std;

char getSign(int a, int b) {
    char sign;
    if (a == b) {
        sign = '=';
    }
    else if (a < b) {
        sign = '<';
    }
    else if (a > b) {
        sign = '>';
    }
    return sign;
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << getSign(a, b);

}


