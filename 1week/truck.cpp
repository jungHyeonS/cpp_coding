#include <bits/stdc++.h>
using namespace std;

//카운팅배열, 분당 몇대의 트럭이 와있는지
int A,B,C,a,b,cnt[104],ret;
int main(){

    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++){
        cin >> a >> b;

        //a는 포함되어있고 b는 포함되어있지않은 (이상-미만)
        for(int j = a; j < b; j++)cnt[j]++;
    }
    for(int j = 1; j < 100; j++){
        if(cnt[j]){
            //트럭 한대당 비용 계산
            if(cnt[j] == 1) ret += A;
            else if(cnt[j] == 2) ret += B * 2;
            else if(cnt[j] == 3) ret += C * 3;
        }
    }
    cout << ret << "\n";

    return 0;
}