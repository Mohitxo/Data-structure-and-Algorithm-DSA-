#include <iostream>
using namespace std;

// for Maximum element in array ka function 
int getMax(int num[],int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    // returning max element 
    return max

}

// for minimum element in array ka function 
int getMin(int num[],int n){
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    // returning max element 
    return min

}


int main()
{
    int size;
    cin>>size;

    int num[100];
    // taking input in the array 
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"max element in the array is :"<<getMax(num,size)<<endl;
    cout<<"min element in the array is :"<<getMin(num,size)<<endl;


	return 0;
}
