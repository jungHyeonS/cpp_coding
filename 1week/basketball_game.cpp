#include <bits/stdc++.h>
using namespace std;


// 내 답안
// int num,cnt[26],temp;
// string name;
// bool check;
// int main(){
//     check = false;
//     cin >> num;
//     for(int i = 0; i < num; i++){
//         cin >> name;
//         temp = (int)name[0];
//         cnt[temp - 'a']++;
//     }
//     for(int i = 0; i < 26; i++){
//         if(cnt[i] >= 5){
//             int c = i + 97;
//             cout << (char)c; 
//             check = true;       
//         }
//     }
//     if(check == false){
//         cout << "PREDAJA";
//     }
//     return 0;
// }


//모범답안
int n, cnt[26];
string s,ret;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        cnt[s[0] = 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(cnt[i] >= 5){
            ret+= i +'a';
        }
    }
    if(ret.size()) cout << ret << "\n";
    else cout << "PREDAJA" << "\n"
    return 0;
}