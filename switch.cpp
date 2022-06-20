#include<iostream>
using namespace std;
int main(){
    int num=5;
    
    cout<<endl;

    switch (num)
    {
    case 1:
        cout<<"first line will be printed"<<endl;
        break;

    case 2:
        cout<<"second line will be printed"<<endl;
        break;
    
    default:
    cout<<"this is a by default case"<<endl;
        break;
    }
    cout<<endl;
    return 0;
}