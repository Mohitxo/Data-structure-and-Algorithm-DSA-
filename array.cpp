#include<iostream>
using namespace std;
int main(){
    
    int arr[10];

    cout << "element at 3rd index :" << arr[3] << endl;

    int arr2[10]={1,2,3};
    cout<<"printing element of array wiht the help of for loop :"<<endl;
    int n=10;

    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // creating a zero array 
    int arr3[10]={0};
    cout<<"printing the zero array :"<<endl;

    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}