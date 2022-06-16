#include <iostream>
using namespace std;

int main()
{
    // here we are intialinzing each element by zero but for any other number we have to use other approach 
	int arr[5]={0}; 
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4];

    cout<<endl;

    int arr2[5];
    std::fill_n(arr2, 6, -1);
    cout << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4];

    // using for loop to print array element 
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    int n=10;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    

	return 0;
}
