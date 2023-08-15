// 49 - leetcode
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

// Method 1] Using Sorting 
// T.C. = O(NKLogK) n = total strings in array , k = length of longest string in array
// S.C. = O(NK)
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string> > mp;

    for(auto str : strs){
        string s = str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }

    vector <vector<string> > ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}

// Method 2] Using hashing
// T.C. = O(NK) n = total strings in array , k = length of longest string in array
// S.C. = O(NK)
std::array <int,256> hash_key(string str){
    std::array <int,256> hash_array = {0};
    for(int i = 0; i < str.size(); i++){
        hash_array[str[i]]++;
    }
    return hash_array;
}
vector<vector<string>> groupAnagrams_01(vector<string>& strs) {
    map<std::array <int,256>, vector<string> > mp;

    for(auto str : strs){
        mp[hash_key(str)].push_back(str);
    }

    vector <vector<string> > ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"} ;
    vector< vector<string> > ans = groupAnagrams_01(strs);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}