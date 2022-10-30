
//일곱난쟁이
#include <bits/stdc++.h>
using namespace std;
int a[10004],sum;
pair<int,int> ret;
vector<int> v;
void solve(){
    //조합 콤비네이션함수, 재귀함수,중첩for문
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < i; j++){
            //총합 - a[i] - a[j] 100인경우 찾기
            //pair를써서 두개를 뽑는다
            if(sum - a[i] - a[j] == 100){
                ret = {i,j};
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //입력및 전체합구하기
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }
    solve();
    for(int i = 0; i < 9; i++){
        //잘못된 난쟁이는 컨티뉴, 정상적인거는 백터에 입력
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }
    //정렬
    sort(v.begin(), v.end());
    for(int i : v) cout << i << "\n";
    return 0;
}