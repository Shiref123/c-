#include <iostream>
#include <cctype>
using namespace std;
int main(){
char x;
int y,z;
cin>> x;
if(x>='0'&&x<='9'){
cout <<"IS DIGIT";}
else {
if(x<'A'|| x>='a'){
cout <<"ALPHA"<<endl <<"IS SMALL";}
else  {
cout <<"ALPHA"<<endl <<"IS CAPITAL";}
}
return 0;
}
