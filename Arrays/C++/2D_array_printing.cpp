#include<iostream>
using namespace std;
int main(){
int row=1,col=1;
cout<<"enter value of row and columns"<<endl;
cin>>row>>col;
int arr[row][col];
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
cin>>arr[i][j];
}
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}

