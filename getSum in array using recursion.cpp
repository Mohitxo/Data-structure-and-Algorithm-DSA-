#include <iostream>
using namespace std;

int getSum(int arr[], int size(){
    //base case
    if(size == 0)
        return 0;
        
    if(size == 1)
        return arr[0];
        
    bool remainPart = getSum(arr+1,size-1);
    int sum= arr[0]+remainPart;
    return sum;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    int sum = getSum(arr,size);
    cout<<"sum of the given array is :"<<sum<<endl;
    
   

    return 0;
}
