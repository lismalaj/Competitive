/*
Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.
*/
#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int m, n; cin>>m>>n;
    //if(m%2==0) {cout<<min(7*((n-m-1)/2), 9*(n-m+1))<<"\n"; return
    cout<<(m*n)/ 2<< '\n';
    return 0;
}