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


void makePermutation(int n,int r, int depth){
    cout << n << " : " << r << " : " << depth << "\n";
    if(r == depth){
        printV(v);
        return ;
    }
    //depth를 기반으로 swap
    for(int i = depth; i < n; i++){
        swap(v[i],v[depth]);
        makePermutation(n,r,depth + 1);
        swap(v[i],v[depth]);
    }
    return;
}


int main(){
    for (int i = 1; i <=3; i++)v.push_back(i);

    makePermutation(3,3,0);
    // do{
    //     printV(v);
    // }while(next_permutation(v.begin(),v.end()));

    return 0;
}