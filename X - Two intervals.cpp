#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main (){
int a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a <= c and c <= b)
        cout << c << " " << min (d,b);
    else if (a >= c and a <= d)
        cout << a << " " << min (d,b);
    else cout << -1 ;
return 0;
}
