#include<iostream>
#include<math.h>

using namespace std;

int tmp_arr[]={}, nd_arr[]={};
int intSize(int x);
int getIntFrom(int x, int choosen, int len);
int main()
{
    int a, b, c, as, bs, cs, t;
    cin >> a >> b;
    cin.ignore();
    c = a * b;
    as = intSize(a);
    bs = intSize(b);
    cs = intSize(c);
    t = (a > b ? a : b);
    if (cs > as && cs > bs) {
        for (int i = 0; i < intSize(t); i++) {
            cout << " ";
        }
    }
    cout << t << endl;
    //cout << "*" << endl;
    t=(a < b ? a : b);
    if (cs > as && cs > bs) {
        for (int i = 0; i < intSize(t); i++) {
            cout << " ";
        }
    }
    cout << t << endl;
    if (cs > as && cs > bs) {
        for (int i = 1; i < cs; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    else if (as > bs) {
        for (int i = 1; i < as; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    else {
        for (int i = 1; i < bs; i++) {
            cout << "-";
        }
        cout << "-" << endl;
    }
    for (int i=0; cs-intSize(a*b)>i; i++){
        cout << " ";
    }
    cout << b*a << endl;
    cout << c << endl;
    //cout << getIntFrom(12345, 5, 5) << endl;
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
int getIntFrom(int x, int choosen, int len)
{
    int mo,y;
    mo = pow(10, len-choosen+1);
    //if(x/mo<0){x*=10;}
    y = x / mo;
    return y;
}
