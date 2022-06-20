#include<iostream>
using namespace std;

void printcounting(int n){
    // function body 

    for(int i=0; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    
    int num;
    cout<<"enter the number till you want to count :";
    cin>>num;
 

// function call 
    printcounting(num);
    return 0;
}