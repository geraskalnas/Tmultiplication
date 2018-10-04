#include<iostream>
#include<math.h>

using namespace std;

int intSize(int x);
int main()
{
    int a, b, c, as, bs, cs;
    cin >> a >> b >> c;
    cin.ignore();
    cout << " " << (a > b ? a : b) << endl;
    cout << "*" << endl;
    cout << " " << (a < b ? a : b) << endl;
    c = a * b;
    as = intSize(a);
    bs = intSize(b);
    cs = intSize(c);
    if (cs > as && cs > bs) {
        for (int i = 0; i < cs; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    else if (as > bs) {
        for (int i = 0; i < as; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    else {
        for (int i = 0; i < bs; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    cout << " " << c << endl;
    return 0;
}
int intSize(int x)
{
    int mo, y, i = 1;
    while (true) {
        mo = pow(10, i);
        y = x / mo;
        if (y < 1) {
            return 1;
        }
        if (y < 10) {
            return i + 1;
        }
        i++;
    }
}
