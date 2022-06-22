#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "print the array :";
    printArray(arr1, 10);
    cout<<endl;

    cout<<"printing the size of array :"<<endl;
    int array_size=sizeof(arr1)/sizeof(int);
    cout<<array_size<<endl;
    return 0;
}