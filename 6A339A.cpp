#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int a[105], n= 0, i=2;
    while(cin>>a[n++]);
    sort(a, a+n);
    cout<<a[1];
    for(; i<n;i++){
        cout<<'+'<<a[i];
    }
    return 0;
}
