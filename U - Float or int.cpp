#include <iostream>
using namespace std;
int main (){
double x;
cin>> x;
if(x-int(x)==0){
cout <<"int "<<int(x);}
if(x-int(x)!=0){
cout <<"float " <<int(x)<<" "<<x-int(x);}
return 0;
}
