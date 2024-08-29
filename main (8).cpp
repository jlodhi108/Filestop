#include<bits/stdc++.h>
using namespace std;
string reorderString(const string& s) {
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }
    vector<pair<char, int>> charFreq(freq.begin(), freq.end());
    sort(charFreq.begin(), charFreq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        if (a.second != b.second) return a.second > b.second; 
        return a.first < b.first; 
    });
    string result;
    for (const auto& p : charFreq) {
        result += string(p.second, p.first); 
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        cout << reorderString(s) << "\n";
    }

    return 0;
}
