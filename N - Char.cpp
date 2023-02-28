#include <iostream>
#include <cctype>
using namespace std;
int main(){
char x;
int y,z;
cin>> x;
if(x<'A'|| x>='a'){
y=toupper (x);
cout <<char(y);}
else {
z=tolower (x);
cout <<char(z);}

return 0;
}
