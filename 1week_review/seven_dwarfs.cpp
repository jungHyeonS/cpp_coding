#include<bits/stdc++.h>
using namespace std;

int arr[9],sum;
int main(){
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }

    sort(arr,(arr+9));

    do{
        sum = 0;
        for(int j = 0; j < 7; j++){
            sum += arr[j];
        }  
        if(sum == 100){
            for(int j = 0; j < 7; j++){
                cout << arr[j] << "\n";
            }   
            break;
        }
    }while(next_permutation(arr,(arr+9)));

    
    return 0;
}