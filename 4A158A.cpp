/*Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.*/

#include <iostream>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, k; cin>>n; cin>>k;
    vector<int> array; int counter = 0;
    for(int i=0;i<n;i++){
        int x; cin>> x;
        //if(x >= k && x >0) counter++;
        array.push_back(x); // this isn't even needed LOL
        //cin>> array[i];
    }
    for (int i = 0; i < n; i++) {
        if (array[i] >= array[k - 1] && array[i] > 0) {
            counter++;
        }
    }
    /*for(int score: array ){
        if(score >= array[score-1] && score > 0) counter++;
    }*/
    cout<< counter <<endl;
    return 0;
}
