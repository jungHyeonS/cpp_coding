#include <bits/stdc++.h>
using namespace std;


string temp;
int main(){

    //스페이스바도 입력받아야 되기때문에 getline
    getline(cin,temp);


    //문자열 순회
    for(int i = 0; i < temp.size(); i++){
        int s = (int)temp[i];

        //대문자 일경우
        if(s >= 65 && s <= 90){

            //현재 문자에 +13을 해주고 만약 대문자 범위를 초과했을경우 영어 갯수만큼 빼준다
            int block = s + 13;
            if(block > 90){
                block -= 26;
            }
            //현재 문자를 rot13한 문자로 변경 한다
            temp[i] = (char)block;

            //소문자일경우
        }else if(s >= 97 && s <= 122){
            //현재 문자에 +13을 해주고 만약 소문자 범위를 초과했을경우 영어 갯수만큼 빼준다
            int sblock = s + 13;
            if(sblock > 122){
                sblock -= 26;
            }
            //현재 문자를 rot13한 문자로 변경 한다
            temp[i] = (char)sblock;
        }
    }
    cout << temp << "\n";
    return 0;
}