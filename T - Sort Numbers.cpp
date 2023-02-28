#include <iostream>
using namespace std;
int main (){
int arr[3], x,arr2[3];
for (int i=0;i<3;i++){
cin>> arr[i];}
for (int a=0; a<3;a++){
arr2[a]=arr[a];}
for (int i=0;i<3;i++){
for (int j=i; j<3;j++){
if(arr[j]<arr[i]){
x=arr[j];
arr[j]=arr[i];
arr[i]=x;
}
}
}
for (int i=0;i<3;i++){
cout <<arr[i]<<endl;} cout <<endl;
for(int i=0;i<3;i++){
cout <<arr2[i]<<endl;}
return 0;
}
