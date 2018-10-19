#include<iostream>
#include<math.h>

namespace tools {
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
        int mo, y, z;
        for(int i=0; i<choosen; i++) {
            mo = pow(10, len-i);
            y = x / mo;
            z = x-(y*mo);
        }
        mo = pow(10, len-choosen);
        y = z / mo;
        return y;
    }
}

using namespace std;
using namespace tools;

//int intSize(int x);
//int getIntFrom(int x, int choosen, int len);
int main()
{
    int a, b, c, as, bs, cs, t, tm;
    cin >> a >> b;
    cin.ignore();
    c = a * b;
    as = intSize(a);
    bs = intSize(b);
    cs = intSize(c);

    if(cs > as && cs > bs) {
        t=cs;
    } else if(bs>as) {
        t = bs;
    } else {
        t=as;
    }

    for(int i=0; i<t-as; i++) {
        cout << " ";
    }
    cout << a << endl;

    for(int i=0; i<t-bs; i++) {
        cout << " ";
    }
    cout << b << endl;

    for(int i=0; i<t-1; i++) {
        cout << "-";
    }
    cout << "-" << endl;

    for(int i=bs; i>0; i--) {
        tm = getIntFrom(b, i, bs)*a;
        for(int ti=0; ti<t-intSize(tm)+i-bs; ti++) {
            cout << " ";
        }
        cout << tm << endl;
    }

    for(int i=0; i<t-1; i++) {
        cout << "-";
    }
    cout << "-" << endl;

    for(int i=0; i<t-cs; i++) {
        cout << " ";
    }
    cout << c << endl;

    return 0;
}

