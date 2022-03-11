/**
 * @file template.cpp
 * @author Emanual20(Emanual20@foxmail.com)
 * @brief For Codeforces, Atcoder or some other OJs else
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma GCC optimize(2)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef long long ll;
const int maxn = 1e6 + 10;

int prime[maxn], n;
// if prime(i) == 1 means i is **not** a prime.
void Eratothenes(int up_bound){
    for (ll i = 2; i <= up_bound; i++){
        if(!prime[i]){
            for (ll j = i * i; j <= up_bound; j += i){
                prime[j] = 1;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Eratothenes(1e5 + 10);
    cin >> n;
    if(n == 1){
        cout << 1 << endl
             << 1 << endl;
    }
    else if(n == 2){
        cout << 1 << endl
             << 1 << " " << 1 << endl;
    }
    else{
        cout << 2 << endl;
        for (int i = 2; i <= n + 1; i++){
            cout << (prime[i] ? 1 : 2) << " ";
        }
        cout << endl;
    }
    return 0;
}