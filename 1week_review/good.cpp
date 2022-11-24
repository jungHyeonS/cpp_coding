#include<bits/stdc++.h>
using namespace std;

//단어의수,최종 결과 선언
int n,ret;
//단어 선언
string temp;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        //스택 구조로 선언
        stack<char> stk;
        for(char a : temp){
            //스택에 값이 있고 가장 위에있는 값이랑, 문자열의 값이 같다면 없애기
            if(stk.size() && stk.top() == a){
                stk.pop();
            }else{
                //아니면 스택에 넣기
                stk.push(a);
            }
            //스택이 비어있다면 최종결과 +1
            if(stk.size() == 0){
                ret++;
            }
        }
    }
    cout << ret << "\n";
}
