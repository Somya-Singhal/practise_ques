#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

// int solve(ll l,ll r,ll need,int alphasize){
//     ll mid=l+(r-l)/2LL;
//     if(need==mid)
//     return alphasize;
//     else if(need<mid)
//     return solve(l,mid-1,need,alphasize-1);
//     else
//     return solve(mid+1,r,need,alphasize-1);
// }

int go(ll l, ll r, ll need, int alphSize)
{
    ll m = l + (r - l) / 2LL;
    if (need < m)
        return go(l, m - 1, need, alphSize - 1);
    else if (need > m)
        return go(m + 1, r, need, alphSize - 1);
    else
        return alphSize;
}
int main()
{
 fast_cin();
 int n;
    ll k;

    cin >> n >> k;
    ll sz = 1;
    for (int i = 1; i < n; i++)
        sz = sz * 2LL + 1LL;
    
    cout << go(1, sz, k, n);
 }