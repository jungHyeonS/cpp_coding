#include <bits/stdc++.h>
using namespace std;

// int n,sum,ret;
// string arr[10005];
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n; i++){
//         int firstCheck = 0;
//         int secondCheck = 0;
//         if(arr[i].size() == 3){
//             if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]){}
//             else{
//                 ret++;
//             }
//         }else{
//             for(int j = 0; j < arr[i].size(); j++){
//                 if(arr[i][j] == arr[i][j+1]){
//                     firstCheck++;
//                     j+=1;
//                 }
//                 else if(arr[i][j] == arr[i][j+3]){
//                     secondCheck++;
//                 }
//             }
//             sum = firstCheck + secondCheck;
//             if(sum == round((arr[i].size() / 2))){
//                 ret++;
//             }  
//         }
//     }
//     cout << ret << "\n";
//     return 0;
// }


int n,ret;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        stack<char> stk;
        for(char a :s){
            if(stk.size() && stk.top() == a){
                stk.pop();
            }else{
                stk.push(a);
            }
        }
        if(stk.size() == 0)ret++;
    }
    cout << ret << "\n";
    return 0;
}