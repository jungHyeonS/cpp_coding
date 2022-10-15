#include <bits/stdc++.h>
using namespace std;

//vector
// vector<int> v;
// int main(){
//     for(int i = 1; i <= 10; i++){
//         v.push_back(i);
//     }
//     for(int a : v){
//         cout << a << " ";
//     }
//     cout << "\n";
//     v.pop_back();

//     for(int a : v){
//         cout << a << " ";
//     }
//     cout << "\n";

//     v.erase(v.begin(),v.begin() + 1);
//     for(int a : v) cout << a << " ";

//     cout << "\n";

//     auto a = find(v.begin(), v.end(),100);
//     if( a== v.end()){
//         cout << "not found" << "\n";
//     }

//     fill(v.begin(), v.end(), 10);
//     for(int a : v) cout << "not found" << "\n";

//     fill(v.begin(),v.end(),10);
//     for(int a : v) cout << a << " ";
//     cout << "\n";
//     v.clear();
//     cout << "아무것도 없을까?";
//     for(int a : v) cout << a << " ";
//     cout << "\n";
//     return 0;
// }

//vector 를 함수 매개변수로 만들어 변화 시키기
// void f(vector<int> &v){
//     v[0] = 100;
// }

// int main(){
//     vector<int> v;
//     for(int i =1; i <=3; i++){
//         v.push_back(i);
//     }
//     f(v);
//     for(int i : v) cout << i << " ";
//     return 0;
// }


//백터를 만들때 v[10] 과 같이 백터 배열로 만들었으니 백터 안에 있는 요소를 접근할때는 2차원 배열접근하듯이
// void f(vector<int> v[10]){
//     v[0][0] = 1000;
// }
// int main(){
//     //백터 배열 10개 생성
//     vector<int> v[10];

//     //백터 배열 첫번째 요소에 100 추가
//     v[0].push_back(100);
//     f(v);
//     for(int i : v[0]) cout << i << " ";
//     return 0;
// }


//2차원 백터
// void f(vector<vector<int>> &v){
//     vector<int> vv;
//     vv.push_back(10000);
//     v.push_back(vv);
// }
// int main(){
//     vector<vector<int>> v;
//     f(v);
//     for(int i : v[0]) cout << i << " ";
//     return 0;
// }

//Array
// int v[10];
// int main(){
//     for(int i =1; i <= 10; i++){
//         v[i-1] = i;
//     }
//     for(int a : v) cout << a << " ";
//     cout << "\n";

//     auto a = find(v, v + 10, 100);
//     if(a == v + 10) cout << "not found" << "\n";

//     fill(v,v+10, 10);
//     for(int a : v) cout << a << " ";
//     cout << "\n";
//     return 0;
// }


//vector 초기화 하기
//vector 10개를 생성
// vector<int> v[10];

// //크기가 10이며 초기값이 0인 vector를 선언
// vector<int> v2(10,0);

// //크기 10*10, 초기값은 0인 2차원 vector 만들기
// vector <vector<int>> v3(10,vector<int>(10,0));

// //vector로 2차원 배열 만들기
// vector<vector<int>> v4;

// //배열 포기화 shortcut : 전체 0으로 초기화한다
// //일부 컴파일러에서는 동작하지 않을수도있다
// int dp[10] = {0,};
// int dp2[10][10] = {{0,}};

// const int MAX_N = 100;
// int dist[MAX_N];
// int dist2[MAX_N][MAX_N];


// //배열에 0번째 요소 : 0, 1번째 요소 : 1로 초기화
// int a[10] = {0,1};

// int main(){

//     //vector v 0 으로 초기화
//     fill(v2.begin(),v2.end(),0);


//     //memset : 0, -1, 한문자로만 초기화 가능
//     memset(v,0,sizeof(v));


//     //배열 dist 초기화, 최대치까지 초기화 하는거 중요
//     fill(dist,dist + MAX_N, 0);


//     //fill 를 사용한 2차원 배열 초기화 방법 1
//     for(int i = 0; i < MAX_N; i++){
//         fill(dist2[i],dist2[i] + MAX_N,0);
//     }

//     //fill 을 사용한 2차붱ㄴ 배열 초기화방법 2(이걸 추천)
//     fill(&dist2[0][0],&dist2[0][0] + MAX_N*MAX_N,0);
//     return 0;

// }



// int a[5];
// int temp[5];
// int main(){
//     for(int i = 0; i < 5; i++) a[i] = i;
//     memcpy(temp,a,sizeof(a));
//     for(int i : temp) cout << i << " ";
//     return 0;
// }


//2차원 배열
// const int mxy = 3;
// const int mxx = 4;

// int a[mxy][mxx];
// int main(){
//     for(int i =0; i < mxy; i++){
//         for(int j = 0; j < mxx; j++){
//             a[i][j] = (i+j);
//         }
//     }
//     //good code
//     for(int i = 0; i < mxy; i++){
//         for(int j = 0; j < mxx; j++){
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     //bad
//     for(int i = 0; i < mxx; i++){
//         for(int j = 0; j < mxy; j++){
//             cout << a[j][i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

//pair 와 tuple
// pair<int,int> pi;
// tuple<int,int,int> tl;
// int a,b,c;
// int main(){
//     pi = {1,2};
//     tl = make_tuple(1,2,3);
//     tie(a,b) = pi;
//     cout << a << " : " << b << "\n";
//     tie(a,b,c) = tl;
//     cout << a << " : " << b << " : " << c << "\n";
//     return 0;
// }


//sort
// vector<int> a;
// int b[5];
// int main(){
//     for(int i = 5; i >= 1; i--) b[i-1] =i;
//     for(int i =5; i >=1; i--) a.push_back(i);

//     //오름차순
//     sort(b,b+5);
//     sort(a.begin(),a.end());
//     for(int i:b) cout << i << " ";
//     cout << "\n";
//     for(int i : a) cout << i << " ";
//     cout << "\n";

//     sort(b,b+5,less<int>());
//     sort(a.begin(),a.end(),less<int>());
//     sort(a.begin(),a.end(),less<int>());
//     for(int i : b) cout << i << " ";
//     cout << "\n";
//     for(int i : a) cout << i << " ";
//     cout << "\n";

//     //내림차순
//     sort(b,b+5,greater<int>());
//     sort(a.begin(),a.end(),greater<int>());
//     for(int i : b) cout << i << " ";
//     cout << "\n";
//     for(int i : a) cout << i << " ";
//     cout << "\n";

//     return 0;
// }

// vector<pair<int,int>> v;
// int main(){
//     for(int i = 10; i >=1; i--){
//         v.push_back({i,10-i});
//     }
//     sort(v.begin(),v.end());
//     for(auto it : v) cout << it.first << " : " << it.second << "\n";
//         return 0;
// }
// vector<pair<int,int>> v;
// bool cmp(pair<int,int> a, pair<int,int> b){
//     return a.first > b.first;
// }
// int main(){
//     for(int i =10; i >= 1; i--){
//         v.push_back({i,10-1});
//     }
//     sort(v.begin(),v.end(),cmp);
//     for(auto it : v) cout << it.first << " : " << it.second << "\n";
//     return 0;
// }


//map
// map<string,int> mp;
// int main(){

//     //3가지 방법다 가능
//     mp.insert({"test1",1});
//     mp.emplace("test5",5);
//     //변경과 ,추가 모두 가능 (이방법을 추천)
//     mp["test1"] = 4;

//     for(auto element : mp){
//         cout << element.first << " :: " << element.second << "\n";
//     }
//     //map find메소드는 찾지 못하면 end() 라는 이터레이터를 반환
//     auto search = mp.find("test4");
//     if(search != mp.end()){
//         cout << "found : " << search -> first << " " << (*search).second << "\n";
//     }else{
//         cout << "not found.." << "\n";
//     }

//     //아래 처럼 바로 int 형을 증가시킬수도 있다
//     mp["test1"]++;
//     cout << mp["test1"] << "\n";

//     cout << mp.size() << "\n";
//     mp.erase("test1");
//     cout << mp.size() << "\n";

//     return 0;
// }

// int main(){
//     map<string,int> _map;
//     _map["큰돌"]++;
//     _map["큰돌"]++;
//     for(auto c : _map){
//         cout << c.first << " : " << c.second << "\n";
//     }
//     return 0;
// }
// map<int,int> mp;
// map<string,string> mp2;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);cout.tie(NULL);
//     cout << mp[1] << "\n";
//     cout << mp2["aaa"] << "\n";
//     for(auto i : mp) cout << i.first << " " << i.second;
//     cout << "\n";
//     for(auto i : mp2) cout << i.first << " " << i.second;
//     return 0;
// }

//맵에 요소가 있는지 없는지 확인하고 맵에 데이터를 할당
// map<int,int> mp;
// map<string,string> mp2;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);
//     if(mp[1] == 0){
//         mp[1] = 2;
//     }
//     for(auto i : mp) cout << i.first << " " << i.second;
//     return 0;
// }

// map<int,int> mp;
// map<string,string> mp2;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     if(mp.find(1) == mp.end()){
//         mp[1] = 2;
//     }
//     for(auto i : mp) cout << i.first << " " << i.second;
//     return 0;
// }

//unoordered_map
// unordered_map<string,int> umap;
// int main(){
//     umap["bcd"] = 1;
//     umap["aaa"] = 1;
//     umap["aba"] = 1;
//     for(auto it : umap){
//         cout << it.first << " : " << it.second << "\n";
//     }
//     return 0;
// }


// set : 특정 순서에 따라 고유한 요소를 저장하는 컨테이너, 중복되는 요소가 업속, 오로지 유니크한 값만 저장하는 자료 구조

// int main(){
//     set<pair<string,int>> st;
//     st.insert({"test",1});
//     st.insert({"test",1});
//     st.insert({"test",1});
//     st.insert({"test",1});
//     cout <<st.size() << "\n";
//     set<int> st2;

//     st2.insert(1);
//     st2.insert(2);
//     st2.insert(2);

//     for(auto it : st2){
//         cout << it << "\n";
//     }

//     return 0;

// }






// multiset : 중복되는 원소도 집어넣을수있는 자료 구조, key,value 형태로 집어넣을수 없고
// 넣으면 자동적으로 정렬되는 자료 구조, erase,find,insert 가능


// multiset<int> s;
// int main(){
//     s.insert(12);
//     s.insert(10);
//     s.insert(2);
//     s.insert(10);
//     s.insert(90);
//     s.insert(85);
//     s.insert(45);

//     cout << "Multset elements afset sort\n";
//     for(auto it = s.begin(); it != s.end(); it++)
//         cout << *it << " ";
//     cout << "\n";
    
//     auto it1 = s.find(10);
//     auto it2 = s.find(90);

//     s.erase(it1,it2);

//     cout << "Multiset Elemetns after erase:\n";
//     for(auto it = s.begin(); it != s.end(); it++)
//         cout << (*it) << " ";

//     s.erase(s.begin());
//     cout << "\n";

//     for(auto it = s.begin(); it != s.end(); it++)
//         cout << (*it) << " ";

//     return 0;
// }


// stack : 가장 마지막으로 들어간 데이터가 가장 첫번째로 나오는 성질(LIFO : Last In First Out)을 가진 자료 구조
// 재귀적인 ㅎ마수, 알고리즘에 사용, 웹 브라우저 방문 기록 등에 쓰인다
// 삽입 및 삭제에 O(1), 탐색에 O(n)이 걸린다

// 문자열 폭발, 아름다운 괄호만들기, 짝을 찾기 등에 문제에 쓰인다, "교차하지 않고" 라는 문장이 나오면 스택을 사용하질 말지를 의심

// stack<string> stk;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     stk.push("엄");
//     stk.push("준");
//     stk.push("식");
//     stk.push("화");
//     stk.push("이");
//     stk.push("팅");
//     while(stk.size()){
//         cout << stk.top() << "\n";
//         stk.pop();
//     }
// }


// 큐 : 먼저 집어넣은 데이터가 먼저 나오는 성질(FIFO, First In First Out)을 지닌 자료 구조,
// 나중에 집어 넣은 데이터가 먼저 나오는 스택과는 반대되는 개념, 삽입 및 삭제에 O(1) 탐색에 O(n)이 걸린다
// 주로 BFS에 쓰인다

// int main(){
//     queue<int> q;
//     q.push(1);
//     cout << q.front() << "\n";
//     q.pop();
//     cout << q.size() << "\n";
//     return 0;
// }

// 보통 큐는 size와 함계 쓰인다 pop을 하게되면 size가 작아지고, 그러다가 0이되면 false가 되면서 while문이 종료가 되어 루프를 빠져나오게되는 로직
// int main(){
//     queue<int> q;
//     for(int i =1; i <= 10; i++) q.push(i);
//     while(q.size()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }


// deque : queue는 앞에서만 끄집어낼수 있지만 deque 는 앞뒤로 참고가 가능한 자료구조



