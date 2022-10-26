#include <bits/stdc++.h>
using namespace std;

// int fact(int n){
//     if(n == 1 || n == 0) return 1; //기저사례 - 종료조건
//     return n * fact(n-1);
// }

// int fibo(int n ){
//     if(n == 0 || n == 1) return n;
//     return fibo(n-1) + fibo(n - 2);
// }

// int n = 5;
// int main(){
//     cout << fact(n) << " " << fibo(n) << "\n";
//     return 1;
// }


vector<int> v;
void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}


// void makePermutation(int n,int r, int depth){
//     cout << n << " : " << r << " : " << depth << "\n";
//     if(r == depth){
//         printV(v);
//         return ;
//     }
//     //depth를 기반으로 swap
//     for(int i = depth; i < n; i++){
//         swap(v[i],v[depth]);
//         makePermutation(n,r,depth + 1);
//         swap(v[i],v[depth]);
//     }
//     return;
// }


// int main(){
//     for (int i = 1; i <=3; i++)v.push_back(i);

//     makePermutation(3,3,0);
//     // do{
//     //     printV(v);
//     // }while(next_permutation(v.begin(),v.end()));

//     return 0;
// }

int n = 5, k = 3,a[5] = {1,2,3,4,5};

void print(vector<int> b){
    for(int i : b)cout << i << "";
    cout << "\n";
}
void combi(int start,vector<int> b){
    if(b.size() == k){
        print(b);
        return;
    }
    for(int i = start + 1; i < n; i++){
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
    return ;
}
int main(){
    vector<int> b;
    combi(-1,b);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            for(int k = 0; k < j; k++){
                cout << i << " : " << j << " : " << k << "\n";
            }
        }
    }

    return 0;
}