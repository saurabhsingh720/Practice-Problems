#include<iostream>
using namespace std;
int main(){
int digit,n,arr[10]={0};
cin>>n;
while(n!=0){
    digit=n%10;
    arr[digit]+=1;
    n=n/10;
}
for(int i=0;i<10;i++){
    cout<<"frequency of "<<i<<" is  "<<arr[i]<<endl;
}
}