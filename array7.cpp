#include <iostream>
using namespace std;

void arraySum(int num[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }
    return sum;
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of an Array: ";
    cin >> size;
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Sum is: " << arraySum(arr, size);
    cout << endl;

    return 0;
}