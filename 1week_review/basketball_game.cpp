#include<bits/stdc++.h>
using namespace std;

//선수의수,카운티배열,최종결과 체크 선언
int n, arr[26],ret;

//선수의 성 선언
string temp;
int main(){
    cin >> n;

    //n번만큼 반복하면서 카운팅배열에 인덱스에 맞는 값 +1
    for(int i = 0; i < n; i++){
        cin >> temp;

        //카운팅 배열이 0부터 시작하는 아스키 코드 a(97) 빼기
        arr[temp[0] - 'a']++;
    }

    //카운팅 배열 순회
    for(int i = 0; i < 26; i++){

        //값이 5이상이면 해당 인덱스를 문자로 바꿔서 출력
        if(arr[i] >= 5){
            char t = (char) i + 97;
            cout << t << "";
            ret++;
        }
    }

    //아무것도 없을때 출력
    if(ret == 0){
        cout << "PREDAJA" << "\n";
    }
    return 0;
}