#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//이문제는 1로만 구성되어있는 숫자중 n의 배수를 찾아야된다
//즉 1, 11,111,1111 과 같은 숫자중에 n의 배수를 찾는다
int n;
int main(){


    //입력이 계속이어지기때문에 scanf를 써야한다
    while(scanf("%d",&n) != EOF){

        //cnt=11,11,ret = 1의갯수
        int cnt =1, ret = 1;
        while(true){
            // (1 * 10) + 1 == 11
            // (11 * 10) +1 == 111
            // (11 * 10) + 1 === 1111
            //위와 같이 1로 구성된 숫자를 만들고 만약 n의 배수이면 1의갯수를 출력한다
            if(cnt % n == 0){
                printf("%d\n",ret);
                break;
            }else{
                cnt = (cnt * 10) + 1;
                //mod연산을 계속하여 오버플로우를 방지한다
                cnt %= n;
                ret++;
            }
            
        }
    }
    return 0;
}
