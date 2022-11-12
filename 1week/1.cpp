#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){

    //입력이 계속해서 주어지기 떄문에 scanf
    while(scanf("%d",&n) != EOF){
        //cnt는 숫자를 만드는 변수,ret이 숫자에 갯수
        int cnt = 1, ret = 1;
        while(true){
            if(cnt % n == 0){
                printf("%d\n",ret);
                break;
            }else{
                //1 * 10 + 1
                //11 * 10 + 1
                cnt = (cnt * 10) + 1;

                //계산을 할때마다 mod 연산
                cnt %= n;

                //1에 갯수 카운팅
                ret++;
            }
        }
    }
    return 0;
}