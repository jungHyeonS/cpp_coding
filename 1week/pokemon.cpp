#include <bits/stdc++.h>
using namespace std;

// map<string,int> map1;
// map<int,string> map2;
// int n,m;
// string name,arr[100000],q,temp;
// int main(){

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     cin >> n >> m;
//     for(int i =0 ; i < n; i++){
//         cin >> name;
//         map1.insert({name,(i+1)});
//         map2.insert({(i+1),name});
//     }

//     for(int i = 0 ; i < m; i++){
//         cin >> q;
//         arr[i] = q;
//     }
//     for(int i = 0; i < m;i++){
//         temp = arr[i];
//         try {
//             string st = temp;
//             int data = stoi(st);
//             auto search1 = map2.find(data);
//             cout << (*search1).second << "\n";
//         } catch (const std::invalid_argument &ia) {
//             auto search = map1.find(temp);
//             cout << (*search).second << "\n";
//         }
//     }
// }


// 모범답안
int n,m;
string s;
map<string,int> mp;
map<int,string> mp2;
string a[100004];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        mp[s] = i +1;
        mp2[i+1] = s;
        a[i+1] = s;
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(atoi(s.c_str()) == 0){
            cout << mp[s] << "\n";
        }else{
            cout << a[atoi(s.c_str())] << "\n";
        }
    }
}