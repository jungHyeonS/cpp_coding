#include<bits/stdc++.h>
using namespace std;
int n,m,arr[15000],ret,temp;
int main(){
    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[i] = temp;
    }
    if(m > 200000){
        cout << 0 << "\n";
    }else{
        for(int i =0; i < n;i++){
            for(int j = i +1; j < n; j++){
                if(arr[i] + arr[j] == m){
                    ret++;
                }
            }
        }
        cout << ret << "\n";
    }

    return 0;
}