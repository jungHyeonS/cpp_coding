// n : 1 ~ 10만
// k : 1 ~ 10만 -1 (n사이값)
// 온도는 -100 ~ 100
// 연속된 온도의 합이 "최대" 되는 값 : 구간합(누적합) : prefix sum, psum[i] = psum[i] + a[i];
// 이문제의 최솟값을 구해야 한다 -100 짜리가 10만번, (100 * 10만번) >> -1000만이다

// 최대값을 구하라 하면 최솟값부터 >>> 최대 값

// 최솟값을 구하라 하면 최대값부터 >>> 최솟값


#include <bits/stdc++.h>
using namespace std;

int n,k,temp,psum[100001], ret= -10000004;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }
    for(int i = k; i <= n; i++){
       ret = max(ret,psum[i] - psum[i-k]);
    }
    cout << ret << "\n";

    return 0;
}