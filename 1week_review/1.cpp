#include<bits/stdc++.h>
using namespace std;


//정수 n, 1로만 이루어진 수(cnt), 자리수 결과(ret)
int n,cnt,ret;
int main(){
    
    while(scanf("%d",&n) != EOF){
        //n 이 입력될때마다 수 와 자리수결과를 초기화
        cnt = 1;
        ret = 1;

        //1로만 이루어진 수가 n의 배수일때 까지 반복한다
        while(true){

            //만약 1로만 이루어진 수가 n의 배수일경우 자리수를 출력하고 반복문을 종료한다
            if(cnt % n == 0){
                cout << ret << "\n";
                break;
            }else{
                //n의 배수가 아닐경우 1로만 이루어지기에 수 * 10 + 1를 해준다
                cnt = (cnt * 10) + 1;

                //자리수가 높아질경우 오버플로우가 발생할수있기때문에 계산마다 mod연산을 진행한다
                cnt = cnt % n;

                //자리수를 구한다
                ret++;
            }
        }
    }
}
