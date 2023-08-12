//Sorting
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v) {
    int n = v.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++ ) {
            if(v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " "; 
    }
}
int main() {
    vector<int> v = {4,3,5,2,1};
    bubbleSort(v);
}

//Number of Characters in strings 

#include<bits/stdc++.h>
using namespace std;
vector<int> findLengths(vector<string> &v) {
    int n = v.size();
    vector<int> lengths(n);
    for(int i = 0; i < n; i++) {
        lengths[i] = v[i].size();
    }
    return lengths;
}
vector<int> findUniqueChars(vector<string> &v) {
    int n = v.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        vector<char> vis(26,0);
        int cnt = 0;
        for(int j = 0; j < v[i].length(); j++) {
            if(!vis[v[i][j]]) {
                cnt++;
                vis[v[i][j]] = 1;
            }
        }
        ans[i] = cnt;
    }
    return ans;
}
void print(vector<int> &ans) {
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main() {
    vector<string> v = {"abc","axyza","lmnopq"};
    vector<int> ans = findLengths(v);
    print(ans);
    vector<int> ans2 = findUniqueChars(v);
    print(ans2);
}
