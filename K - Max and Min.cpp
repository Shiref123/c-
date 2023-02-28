#include <iostream>
using namespace std;
int main (){
int arr[3], x;
for (int i=0;i<3;i++){
cin>> arr[i];}
for (int i=0;i<3;i++){
for (int j=i; j<3;j++){
if(arr[j]<arr[i]){
x=arr[j];
arr[j]=arr[i];
arr[i]=x;
}
}
}
cout<<arr[0]<<" "<<arr[2];
return 0;
}
