/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define fi first
#define se second
#define simp main
#define pb push_back
using namespace std;

int simp() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    
    ll t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        for (char &c : b) {
            if (c == 'p') c = 'q';
            else if (c == 'q') c = 'p';
        }
        cout << b << endl;
    }
    
    return 0;
}