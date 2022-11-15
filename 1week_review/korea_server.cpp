#include<bits/stdc++.h>
using namespace std;

//파일의 개수 선언
int n;

//패턴,파일명 배열, 시작패턴,종료패턴 선언
string patten,arr[104],startStr,endStr;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //패턴 및 파일의 개수, 파일명 입력
    cin >> n;
    cin >> patten;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //별표의 인덱스 가져오기
    int index = patten.find("*");

    //패턴에서 별표의 인덱스를 기준으로 처음부터 ~ * 까지의 문자열 가져오기
    startStr = patten.substr(0,index);

    //패턴에서 별포의 인덱스를 기준으로 * ~ 마지막까지의 문자열 가져오기
    endStr = patten.substr(index+1);

    for(int i = 0; i < n; i++){

        //만약 시작패턴 과 종료 패턴의 길이를 더한값이, 파일명 보다 길다면 NE(예외처리)
        //ab*ab > aba
        if(startStr.length() + endStr.length() > arr[i].length()){
            cout << "NE" << '\n';
        }else{
            //시작패턴 길이와 종료 패턴길이 만큼 비교
            if(arr[i].substr(0,startStr.length()) == startStr && arr[i].substr(arr[i].length() - endStr.length()) == endStr){
                cout << "DA" << "\n";
            }else{
                cout << "NE" << '\n';
            }
        }

    }
    return 0;
}