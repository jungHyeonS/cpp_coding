#include<bits/stdc++.h>
using namespace std;

int arr[9],sum;
int main(){

    //9개의 정수를 입력 받는다
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }
    //순열을 정렬이 되어있어야 되기때문에 정렬을 한다,또한 문제에 오름차순이라고 되어있다
    sort(arr,(arr+9));
    //next_permutation 함수로 9개의 숫자에 대한 순열을 뽑는다
    do{
        //뽑아진 순열에서 7개를 가져와 sum에 더해준다
        sum = 0;
        for(int j = 0; j < 7; j++){
            sum += arr[j];
        }  

        //만약 sum에 합이 100일때 해당 순열을 출력하고 종료한다
        if(sum == 100){
            for(int j = 0; j < 7; j++){
                cout << arr[j] << "\n";
            }   
            break;
        }
    }while(next_permutation(arr,(arr+9)));
    

    
    return 0;
}