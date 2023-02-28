#include <iostream>
using namespace std;
int main (){
short x, y;
char z;
cin>> x>> z>>y;
if(z=='>'){
if(x> y){
cout <<"Right";}
else {cout <<"Wrong";}}
if(z=='<'){
if(x<y){
cout <<"Right";}
else {cout <<"Wrong";}}
if(z=='='){
if(x==y){
cout <<"Right";}
else {cout <<"Wrong";}}
return 0;
}
