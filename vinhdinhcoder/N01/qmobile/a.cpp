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
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    string st;
    cin >> st;
    int n = st.size();
    for(int i = 0; i < n; i++) {
        if(st[i] >='0' && st[i] <= '9') {
            cout << st[i] << " ";
        }
    }
    
    return 0;
}