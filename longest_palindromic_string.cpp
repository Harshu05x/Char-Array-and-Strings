// 5 - leetcode
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
bool check(string &s, int i, int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
} 
// Method 3]       
string longestPalindrome(string s) {
    int n = s.size();
    int starting_index = 0;
    int max_len = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(check(s, i, j)){
                if(j-i+1 > max_len){
                    max_len = j-i+1;
                    starting_index = i;
                }
            }
        }
    }
    return s.substr(starting_index, max_len);
}
// Method 2]
string longestPalindrome_01(string s){
    vector<string> substrs;

    for(int i = 0; i < s.size(); i++){
        string temp = "";
        for(int j = i; j < s.size(); j++){
            temp += s[j];
            substrs.push_back(temp);
        }
    }
    string ans = "";
    int max_len = INT32_MIN;
    for(int i = 0; i < substrs.size(); i++){
        int n = substrs[i].size();
        if(check(substrs[i],0,n-1)){
            if(n > max_len){
                ans = substrs[i];
                max_len = n;
            }
        }
    }
    return ans;
}
                   
int main()
{
    string s = "babad";
    cout<<longestPalindrome_01(s)<<endl;
    return 0;
}