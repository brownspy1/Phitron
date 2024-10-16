// Created by @brownspy1 on 2024-10-15 Time:21:54:23
#include <bits/stdc++.h>
using namespace std;

#define pub(X) push_back(X)
#define pob pop_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
bool isPossible(const string &word1, const string &word2) {
    int j = 0; 
   
    for (int i = 0; i < word1.length(); i++) {
        if (word1[i] == word2[j]) {
            j++; 
        }
        if (j == word2.length()) { 
            return true;
        }
    }
    return j == word2.length(); 
}
void solve()
{
    string line;

    
    while (getline(cin, line)) {
        stringstream ss(line);
        string word1, word2;

        ss >> word1 >> word2;

        
        if (isPossible(word1, word2)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    
}

