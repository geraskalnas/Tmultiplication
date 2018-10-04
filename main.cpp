#include <iostream>
#include <math.h>

using namespace std;
int intSize(int x);
int main()
{
   int a, b, c;
   cin >> a >> b; cin.ignore();
   cout << " " << a << endl;
   cout << "*" << endl;
   cout << " " << b << endl;
   cout << "-" << endl;
   intSize(a);
   return 0;
}
int intSize(int x){
    int mo, y, i=1;
    //cout <<1<<endl;
    while (x > 0){
        mo = pow(10, i);
        y = x / mo;
        x -= y;
        if(y<1){ cout << "l 0" << endl; break;}
        else if(x < 10){ cout << i << "l " << i << endl; break;}
        cout << "y" << y <<endl;
        cout << "mo" << mo << endl;
        i++;
    }
}
