#include<bits/stdc++.h>
using namespace std;

//int 범위로는 풀수가없기에 long long 사용
typedef long long ll;

//long 자료형의 A,B,C변수 선언
ll a,b,c;

//계산을 나누기 위한 함수선언
ll go(ll num,ll target){

    //재귀함수 탈출을 위한 기저사례
    if(target == 1){
        return num % c;
    }

    //a를 8번 곱하는거는 a를 4번 곱한 두개를 곱한거랑 같기때문에 재귀함수를 사용한다
    ll temp = go(num, target / 2);
    ll ret = (temp * temp) % c;

    //만약 나누는값이 홀수라면 한번더 곱해준다(2의5승은 2의2승 * 2의2승 * 2의1승
    if(target % 2){
        ret = (ret * num) % c;
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //a,b,c 입력 및 계산 결과 출력
    cin >> a >> b >> c;
    cout << go(a,b) << "\n";
    return 0;
}