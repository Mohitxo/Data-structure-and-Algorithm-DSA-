#include<iostream>
using namespace std;

void swapalternate(int arr[],int size){
        for(int i=0; i<size; i=i+2){
            if(i+1<size)
               swap(arr[i],arr[i+1]);
        }

}

int printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}


int main(){
    int even[6]={1,2,3,4,5,6};

    int odd[5]={10,20,30,40,50};

    swapalternate(odd,5);
    swapalternate(even,5);
    printArray(odd,5);
    printArray(even,6);

    return 0;
}