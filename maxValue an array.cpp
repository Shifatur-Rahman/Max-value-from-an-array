#include<iostream>
using namespace std;

int main(){

int arr[] = {5,12,7,5,8,3,10};
int i, max, length;
length = sizeof(arr)/sizeof(arr[0]);
//cout<<length<<endl;
max = arr[0];
for(i=0; i<length; i++){
   if(arr[i]>=max){
	max=arr[i];
   }
}

cout<<max<<endl;
}
