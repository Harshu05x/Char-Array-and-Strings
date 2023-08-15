// 14 - leetcode
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    
    int a = strs.size();
    string n = strs[0];
    string m = strs[a-1];
    string ans = "";

    for(int i = 0; i < n.size(); i++){
        if(n[i] == m[i]){
            ans.push_back(n[i]);
        }
        else break;
    }
    return ans;
}

int main()
{
    vector <string> strs = {"flower","flow","flight"};
    string prefix = longestCommonPrefix(strs);
    cout<<prefix<<endl;
    return 0;
}