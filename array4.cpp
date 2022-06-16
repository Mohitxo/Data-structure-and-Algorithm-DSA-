#include <iostream>
using namespace std;

int main()
{
    // printing array of char element by simple method
	char ch[5]={'a','b','c','d','e'};
    cout<<ch[0]<<" "<<ch[1]<<" "<<ch[2]<<" "<<ch[3]<<" "<<ch[4]<<endl;;

    // printing array of char element  by using for loop
    char ch2[5]={'q','w','e','r','s'};
    for(int i=0;i<5;i++){
        cout<<ch2[i]<<" "<<endl;
    }
	return 0;
}
