//입력
#include <bits/stdc++.h>
using namespace std;
// int a;
// int main(){
//     cin >> a;
//     scanf("%d",&a);
//     return 0;
// }


//붙어있는 문자열 - string으로 변환
// int n,m, a[10][10];
// string s;
// int main(){
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         cin >> s;
//         for(int j = 0; j < m; j++){
//             a[i][j] = s[j] - '0';
//         }        
//     }
//     for(int i =0; i < n; i++){
//         for(int j =0; j < m; j++){
//             cout << a[i][j];
//         }
//         cout << "\n";
//     }
// }

//붙어있는 문자열 - scanf로 받기
// int a[10][10], n,m;
// int main(){
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             scanf("%1d",&a[i][j]);
//         }
//     }
//     return 0;
// }


//붙어있는 문자열 - scanf - adbc
// char a[10][10];
// int main(){
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 4; j++){
//             scanf(" %c",&a[i][j]);
//         }
//     }
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 4; j++){
//             cout << a[i][j];
//         }
//         cout << "\n";
//     }
//     return 0;
// }

//getline
// string s;
// int main(){
//     getline(cin,s);
//         cout << s << "\n";
//     return 0;
// }


//getline 여러번
// int T;
// string s;
// int main(){
//     cin >> T;
//     string bufferflush;
//     getline(cin,bufferflush);
//     for(int i = 0; i < T; i++){
//         getline(cin,s);
//         cout << s << "\n";
//     }
//     return 0;
// }


//입력이 계속해서 이어질떄 - scanf
int n;
int main(){
    while (scanf("%d",&n) != EOF){
        cout << 1 << "\n";
    }
    return 0;
}

//입력이 계속해서 이어질떄 - cin
int n;
int main(){
    while(cin >> n){
        cout << 1 << "\n";
    }
}