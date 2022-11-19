#include <bits/stdc++.h>
using namespace std;

//포켓몬의 수, 문제 갯수 선언
int n,m;

//문자열키,정수 배열 맵 선언
map<string,int> mp1;

//정수 키, 문자열 배열 맵 선언
map<int,string> mp2;

//포멧몬 이름 문자열 선언
string temp;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //포켓몬수,문제 갯수 입력
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        //포켓몬 이름을 입력받고 각각 맵에 추가
        cin >> temp;
        mp1[temp] = (i+1);
        mp2[(i+1)] = temp;
    }


    // 문제 문자열을 정수로 바꾸고, 만약 0일경우
    // 문자열,정수 맵에서 찾고, 아닐경우 정수,문자열 맵에서 찾기
    for(int i = 0; i < m; i++){
        cin >> temp;
        int num = atoi(temp.c_str());
        if(num == 0){
            cout << mp1[temp] << "\n";
        }else{
            cout << mp2[num] << "\n";
        }

    }
    return 0;
}