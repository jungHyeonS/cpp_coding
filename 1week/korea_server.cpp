#include <bits/stdc++.h>
using namespace std;

int n;
string s,ori_s,pre,suf;


int main(){
    cin >> n;
    cin >> ori_s;
   
    //* 의 포지션 값을 찾는다
    int pos = ori_s.find("*");

    //처음부터 별 까지 자르기
    pre = ori_s.substr(0,pos);

    //별부터 마지막 까지 자르기
    suf = ori_s.substr(pos + 1);

    for(int i = 0; i < n; i++){
        cin >> s;

        //접두,접미사를 더한값이 입력한 문자열 보다 크다면 NE
        if(pre.size() + suf.size() > s.size()){
            cout << "NE\n";
        }else{

            //접두,접미사 크기 만큼 동일하게 비교
            if(pre == s.substr(0,pre.size()) && suf == s.substr(s.size() - suf.size())){
                cout << "DA\n";
            }else{
                cout << "NE\n";
            }
        }
    }

    return 0;
}