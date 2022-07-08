#include <iostream>
using namespace std;

void reverse(string &str,int i,int j){
    // base case
    if(i>j)
    return ;
    swap(str[i],str[j]);
    i++;
    j--;
    
    // recursive call
    reverse(str,i,j);
}
int main()
{
    string str = "Mohit";
    reverse(str,0,str.length()-1);
    cout<<str<<endl;
    

    return 0;
}
