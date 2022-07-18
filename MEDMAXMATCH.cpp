#include <bits>
using namespace std;
void solution(){
    int n;
    cin>>n;
    
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int start = (n-1)/2;
    int end = n-1;
    
    int median = INT_MAX;
    for(int i=start; i<n; ++i){
        median = min(median,a[i]+b[end]);
    }
    cout<<median<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solution();
	}
	return 0;
}
