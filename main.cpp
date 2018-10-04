#include <iostream>
#include <math.h>

using namespace std;
int intSize(int x);
int main()
{
   int a, b, c;
   cin >> a >> b >> c; cin.ignore();
   cout << " " << a << endl;
   cout << "*" << endl;
   cout << " " << b << endl;
   cout << "-" << endl;
   intSize(b);

   return 0;
}
int intSize(int x){
    int mo, y, i=1;
    while (True){
        mo = pow(10, i);
        y = x / mo;
        if(y < 1){cout << "exit l 1" << endl; break;}
        if(y < 10){cout << "exit l " << i+1 << endl; break;}
        i++;
    }
}
