#include<iostream>
using namespace std;

int factorail(int n){
    //base case 
    if(n==0)
        return 1;

    return n * factorail(n-1);
}

int main(){
    int n= 5;

    int ans=factorail(n);
    cout<<"printing the factorail answer"<<ans<<endl;
    
    return 0;
}