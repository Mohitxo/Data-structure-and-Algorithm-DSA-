#include <iostream>
using namespace std;

void printarray(int array[],int size){
    cout<<"array printing is started from her"<<endl;
    for(int i;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"array printing is done";

}
int main()
{
	int arr[5]={1,2,3,4,5};
    printarray(arr,5);

	return 0;
}
