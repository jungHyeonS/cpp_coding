#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//a를 b번 곱한수를 c 로 나눈 나머지를 구하라
//나머지가 0이 나와도 되나?.. 계산이 틀렸나?..
//반례?.. 숫자 범위에 음수도 포함인가?.. 21억 이하라..
//int 형으로는 할수가 없다
ll a,b,c;
ll go(ll a, ll b){
    //재귀함수는 기저사례가 만들어져야한다
    //만약에 b가 1일때 a % c를 리턴 
    if(b == 1) return a % c;
    //ret이라는 변수에 담아주고, 재귀 함수
    ll ret = go(a,b/2);
    //그리고 ret 곱하기 ret 라고 모듈러 연산(a의b승 * a의 b승)
    ret = (ret * ret) % c;

    //홀수의 처리(2의5승은, 2의4승 * 2의1승)
    //만약에 홀수라면 한번더 곱해줘야 되기때문이다
    //cpp 에서는 0은 false, 0외에 값들은 true(-1도 true)
    if(b % 2) ret = (ret * a) % c;
    return ret;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a,b) << "\n";
    return 0;
}