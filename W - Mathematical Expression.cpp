#include <iostream>
using namespace std;
int main (){
short x, y,i;
char z,j;
cin>> x>> z>> y>>j>>i;
if(z=='+'){
if(x+y==i){cout <<"Yes";}
else {cout <<x+y;}}
if(z=='*'){
if(x*y==i){cout <<"Yes";}
else {cout <<x*y;}}
if(z=='-'){
if(x-y==i){cout <<"Yes";}
else {cout <<x-y;}}
return 0;
}
