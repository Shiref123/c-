#include <iostream>
using namespace std;
int main (){
long x,y,z;
cin>> x;
y=x/365;
z=(x%365)/30;
cout <<y<<" years"<<endl;
cout <<z<<" months"<<endl;
cout <<x-((y*365)+(z*30))<<" days";
return 0;
}
