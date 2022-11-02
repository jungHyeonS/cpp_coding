#include <bits/stdc++.h>
using namespace std;
string s,ret;
int temp;
int main(){
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        temp = (int)s[i] + 13;
        if(s[i] >= 65 && s[i] < 97){
            if(temp > 90) s[i] = temp - 26;
            else s[i] = temp;
        }else if(s[i] >= 97 && s[i] <= 122){
            if(temp > 122) s[i] = temp - 26;
            else s[i] = temp;
        }
        cout << s[i];
    }
    return 0;
}