#include<iostream>
using namespace std;
int main(){
    int*arr;
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<"creating array";
    arr=new int[size];
    cout<<"Enter values of array";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"display arr";
 
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}