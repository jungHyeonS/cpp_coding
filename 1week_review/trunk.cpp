#include <bits/stdc++.h>
using namespace std;
int A,B,C,arr[100],a,b,ret;
int main(){
    cin >> A >> B >> C;


    for(int i = 0; i < 3; i++){
        cin >> a >> b;

        //시각이기때문이 a는 포함되지만 b는 포함되지 않는 범위
        //카운팅배열로 트럭이 몇대 왔는지 체크
        for(int j = a; j < b; j++){
            arr[j]++;
        }
    }

    //트럭 개수별로 계산
    for(int i = 0; i < 100; i++){
        if(arr[i] == 1){
            ret += arr[i] * A;
        }
        if(arr[i] == 2){
            ret += arr[i] * B;
        }
        if(arr[i] == 3){
            ret += arr[i] * C;
        }
    }
    cout << ret << "\n";
}