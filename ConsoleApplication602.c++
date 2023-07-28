#include <iostream>
#include <string>
using namespace std;

double power(double x, int y)
{
    double r;
    r = 1;
    for (int i = 0; i < y; i++)
    {
        r = r * x;
    }
    return r;
}

int main()
{
    double x;
    int y;
    cin >> x >> y;
    cout << power(x, y);
}
