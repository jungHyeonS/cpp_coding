#include<bits/stdc++.h>
using namespace std;
string name,ret;
int arr[26],flag;
char mid;
int main(){
    cin >> name;

    //알파벳 카운팅 배열
    for(int i = 0; i < name.length(); i++){
        arr[name[i] - 'A']++;
    }

    //아스키코드 역순으로 순회
    for(int i = 26; i >= 0;i--){

        //만약 카운팅이 있다면
        if(arr[i]){

            //홀수 찾기 & 1
            if(arr[i] & 1){
                //홀수가 한개가 들어오는 경우,중앙에다 넣을 문자 찾기
                mid = char(i+65);
                flag++;
                arr[i]--;
            }
            //홀수가 2개이상일경우 순회 종료
            if(flag == 2){
                break;
            }
            //아닐경우 알파벳을 카운팅한만큼 순회해서 앞뒤로 붙인다
            for(int j = 0; j < arr[i]; j+=2){
                ret = char(i+65) + ret;
                ret += char(i+65);
            }
        }
        
    }

    //만약 미드 값이 있다면 최종결과 중간에 넣는다
    if(mid){
        ret.insert(ret.begin() + ret.size() / 2,mid);
    }

    //홀수가 2개일경우, sry, 아닐결우 최종 결과 출력
    if(flag == 2){
        cout << "I'm Sorry Hansoo" << "\n";
    }else{
        cout << ret << "\n";
    }
    
    return 0;
}