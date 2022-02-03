/**
 * @file template.cpp
 * @author Emanual20(Emanual20@foxmail.com)
 * @brief For Codeforces, Atcoder or some other OJs else
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 2e4 + 10;
vector<int> vec;
int vis[maxn], v, n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> v >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }

    vis[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = v; j >= vec[i]; j--){
            vis[j] = (vis[j] || vis[j - vec[i]]);
        }
    }

    for (int i = v; i >= 0; i--){
        if(vis[i]){
            cout << (v - i) << endl;
            return 0;
        }
    }
    return 0;
}