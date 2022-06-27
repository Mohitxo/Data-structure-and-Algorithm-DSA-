#include <iostream>
using namespace std;

// x:Minimum age limit is XX
// y: Age should be strictly less than Y
// Chef's current Age is AA
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if(x<=a && a<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
