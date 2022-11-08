#include <bits/stdc++.h>
using namespace std;

int n,m,arr[15000];
int ret;
void Combination(int arr[], int n, int r,  int index,int target, int comb_arr[])
{
	if (r == 0)
	{
		// r개를 뽑기로 했는데 r개를 다 뽑은 경우
        int sum = 0;
		for (int i = 0; i < index; ++i)
		{
			// cout << comb_arr[i];
            sum += comb_arr[i];
		}
        if(sum == m){
            ret += 1;
        }
	}
	else if (target == n)
	{
		// target이 index를 초과=>종료 
		return;
	}
	else
	{
		//target 인덱스의 원소를 저장
		comb_arr[index] = arr[target];
		Combination(arr, n, r - 1, index + 1, target + 1, comb_arr); // 해당 원소를 선택
		Combination(arr, n, r, index, target + 1, comb_arr); // 해당 원소를 선택하지 않음
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> m;
    for(int i = 0; i < n; i++){
        //scanf보다는 cin을 쓰자
        cin >> arr[i];
    }

    //고유 번는 10만 까지 이고 2개를 조합한다했으니 최대 20만까지 나온다
    //그 외에 값들은 불필요한 계산이기 때문에 예외처리를한다
    if(m > 200000){
        cout << 0 << "\n";
    }else{
        // int* comb_arr = new int[15000];
        // Combination(arr, n, 2, 0,0 , comb_arr);
        // cout << ret << "\n";

        //모범답안
        for(int i = 0; i <n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] + arr[j] == m){
                    ret ++;
                }
            }
        }
        cout << ret << "\n";
    }
 
    

    return 0;
}