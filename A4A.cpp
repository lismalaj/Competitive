/*
Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
*/

#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;
    if(n%2 == 0 && n != 2) {cout<<"YES"<<'\n'; return 0;}
    cout<<"NO"<<'\n';

    return 0; // This is the error!!
}