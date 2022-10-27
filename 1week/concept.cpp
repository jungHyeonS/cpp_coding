#include <bits/stdc++.h>
using namespace std;
int a[10004],b,c,psum[10004],n,m,temp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i < n; i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }
    


    for(int i = 0; i < m; i++){
        cin >> b >> c;
        cout << psum[c] - psum[b-1] << "\n";
    }
    return 0;
}