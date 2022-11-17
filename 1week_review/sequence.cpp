#include<bits/stdc++.h>
using namespace std;

//두개의정수 및,온도 temp,누적합,최솟값 변수 선언
int n,k,psum[100004],temp,ret=-10000004;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //n과 k입력
    cin >> n >> k;

    //온도를 입력받으면서 누적합 구하기
    for(int i = 1; i < n; i++){
        cin >> temp;
        psum[i] = psum[i-1] + temp;
    }


    //계산된 누적합 배열을 k번째 부터 반복해줍니다
    for(int i = k; i <= n; i++){
        //[0~k의누적합] - [0~(i-k)의누적합]을 계산하고 최대값을 갱신합니다
        ret = max(ret,psum[i] - psum[i-k]);
    }
    cout << ret << "\n";
    // }

    return 0;
}