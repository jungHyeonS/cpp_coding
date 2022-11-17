#include<bits/stdc++.h>
using namespace std;

int n,k,psum[100004],temp,ret=-10000004;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;

    for(int i = 1; i < n; i++){
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }

    for(int i = 0; i < n; i++){
        // cout << psum[i] << " ";
        ret = max(ret,psum[i] - psum[i-k]);
    }
    cout << ret << "\n";
    // for(int i = k; i <= n; i++){
    //     cout << (psum[i] - psum[i-k]) << " ";
    // }

    return 0;
}