#include<bits/stdc++.h>
using namespace std;

//테스트케이스 수, 의상수 선언
int t,n;

//의상이름,의상 종류 변서 순언
string a,b;
int main(){

    //테스트 케이스 입력
    cin >> t;

    //테스트 케이스만큼 순회
    while(t--){
        
        map<string,int> mp1;
        
        //의상의 수 입력
        cin >> n;
        for(int i = 0; i < n; i++){
            //의상이름,의상 종류 변수 선언
            cin >> a >> b;
            //선언한 맵에 의상종류 키에 해당하는 정수값을 +1(종류 카운팅)
            mp1[b]++;
        }
        long long ret = 1;
        //입력받은 맵을 순회
        for(auto c : mp1){
            //안입은 경우 까지 생각해서 카운팅한 숫자에 +1을 한후 곱하기
            ret *= ((long long)c.second + 1);
        }

        //아예 안입은 경우는 없다했으니 최종 결과에 -1
        ret--;
        cout << ret << "\n";
    }
    return 0;
}