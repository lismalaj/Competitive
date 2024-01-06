#include <algorithm>
#include <iostream>
using namespace std;

void solve(){
    int n; cin>>n; 
    long long int oneCounter = 0;
    long long int yesCounter = 0;
    while(n--){
        int p, v, t;
        cin >> p >> v >> t;
        
        if(p) oneCounter++;
        if(v) oneCounter++;
        if(t) oneCounter++;
        if(oneCounter >= 2) yesCounter++;
        oneCounter = 0; 
    }
    cout<< yesCounter<<endl; 
    
}

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    solve();

    return 0;
}
