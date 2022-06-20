#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    
    cout<<"orginal array :"<<endl;
    print(v);

    vector<int>ans= reverse(v);

    cout<<"printiing the reverse array :"<<endl;
    print(ans);

    return 0;

}