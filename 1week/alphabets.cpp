#include <bits/stdc++.h>
using namespace std;

string aplh;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int arr[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//     cin >> aplh;
//     for(int i = 0; i < aplh.size(); i++){
//         int index = (int)aplh[i] - 97;
//         arr[index] += 1;
//     }
//     for(int i = 0; i < 26; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//모범당안
// cnt['a'] = cnt[97], cpp 에서는 자동으로 인트로 변환해준다
//전역변수로 선언하면 0으로 다 초기화된다
int cnt[26];
int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    cin >> aplh;
    for(char a : aplh){
        //공간을 아끼기 위한 좌표이동
        cnt[a - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        cout << cnt[i] << " ";
    }
    return 0;
}
