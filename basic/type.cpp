#include <bits/stdc++.h>
using namespace std;

//void
// int ret = 1;
// void a(){
//     ret = 2;
//     cout << ret << "\n";
//     return;
// }

// int main(){
//     a();
//     return 0;
// }





//char
// int main(){
//     char a = 'a';
//     cout << a << "\n";
//     return 0;
// }


//string
// int main(){
//     string a = "wow";
//     cout << a << "\n";
//     return 0;
// }

//string array;
// int main(){
//     string a = "wow";
//     a += " ";
//     a += "fantatics";
//     cout << a.size() << "\n";
//     cout << a << "\n";
//     return 0;
// }

//아스키코드
// typedef long long ll;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s = "123";
//     s[0]++;
//     cout << s << "\n";
//     return 0;
// }

//아스키 코드 변환
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     char a = 'a';
//     cout << (int)a << '\n';
//     return 0;
// }

//문자열 함수
// string dopa = "amumu is best";
// int main(){
//     cout << dopa << "\n";
//     if(dopa.find("amumu") != string::npos){
//         cout << "dopa속에 아무무있다!\n";
//     }
//     cout << dopa.substr(0,3) << "\n";
//     reverse(dopa.begin(),dopa.end());
//     cout << dopa << "\n";
//     return 0;
// }


//split
// vector<string> split(string input,string delimiter){
//     vector<string> ret;
//     long long pos = 0;
//     string token = "";
//     while((pos = input.find(delimiter)) != string::npos){
//         token = input.substr(0,pos);
//         ret.push_back(token);
//         input.erase(0,pos + delimiter.length());
//     }
//     ret.push_back(input);
//     return ret;
// }

// vector<string> split_debug(string input, string delimiter){
//     vector<string> ret;
//     long long pos = 0;
//     string token = "";
//     while((pos = input.find(delimiter)) != string::npos){
//         long long pos = input.find(delimiter);
//         cout << "OST : " << pos << "\n";
//         if(pos == string::npos) break;
//         token = input.substr(0,pos);
//         ret.push_back(token);
//         input.erase(0,pos + delimiter.length());
//     }
//     ret.push_back(input);
//     return ret;
// }
// int main(){
//     string s = "안녕하세요 큰돌이는 킹갓제너럴 천재입니다 정말이에요!";
//     string d = " ";
//     vector<string> a= split(s,d);
//     // string s2 = "aaaa bbb ccccc ee ddddddddd!";
//     // vector<string> c = split_debug(s2,d);

//     for(string b : a) cout << b << "\n";
// }


//atoi(s.c_str())
// int main(){
//     string s = "1";
//     string s2 = "amumu";
//     cout << atoi(s.c_str()) << "\n";
//     cout << atoi(s2.c_str()) << '\n';
//     return 0;
// }


//bool
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a = -1;
    cout << bool(a) << "\n";
    a = 0;
    cout << bool(a) << "\n";
    a = 3;
    cout << bool(a) << "\n";
}