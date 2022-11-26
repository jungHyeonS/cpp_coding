#include <bits/stdc++.h>
using namespace std;

//단어의수 n, 최종결과 ret 선언
int n,ret;

//단어 문자열 선언
string temp;

int main(){

    //단어의 수 입력
    cin >> n;

    //단어의 수 만큼 순회
    for(int i = 0; i < n; i++){

        //단어 입력 및 스택 선언
        cin >> temp;
        stack<char> stk;

        //입력받은 단어의 수 만큼 순회
        for(int j = 0; j < temp.size(); j++){

            //만약 스택에 값이 있고, 스택에 가장 위에있는 감이 순회하는 단어랑 같다면
            if(stk.size() && stk.top() == temp[j]){
                //스택에 가장 위에있는 값을 제거
                stk.pop();
            }else{
                //아니면 그 단어를 스택에 넣기 
                stk.push(temp[j]);
            }
        }

        //만약 스택 사이즈가 0이라면 최종결과 카운트
        if(stk.size() == 0){
            ret++;
        }

    }
    cout << ret << "\n";


    return 0;
}