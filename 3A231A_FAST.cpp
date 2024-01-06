#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Solve(){
    int s; cin>> s;
    vector<int> array;int counter = 0;
    for(int i=0;i<s;i++) {
        for(int j=0;j<3;j++){
            int x; cin>>x;
            array.push_back(x);}
        if(count(array.begin(),array.end(), 1) >= 2) counter++;
        array.clear();
        
        
    }
    cout<<counter<<endl;
    
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Solve();

    return 0;
}