/**
 * @file template.cpp
 * @author Emanual20(Emanual20@foxmail.com)
 * @brief For Codeforces, Atcoder or some other OJs else
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma GCC optimize(2)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;

int prime[maxn];
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
ll t, b, d;

int check(ll x){
    int tot = 0, res = 0;
    while(x){
        if(x % d == 0){
            x /= d, tot++;
            if(x % d != 0) res++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Eratothenes(1e5);

    cin >> t;
    while(t--){
        cin >> b >> d;
    }
}