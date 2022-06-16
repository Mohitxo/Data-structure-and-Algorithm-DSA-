#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<endl<<"inside the main the function"<<endl;

    // updating the first element of the array 
    arr[0]=120;

    // print the array inside the update function 
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    cout<<"going back to the main function"<<endl;

}

int main(){
    int arr[3]={1,2,3};

    update(arr,3);
    // print the array after updating it 
    cout<<"print the updated array main function"<<endl;
    // print the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// main key point for the main take away is that ki in the array 
// if update the array by passing the base address of the array than the 
// changes will gonna happend in the main array only not in the copy of the array 