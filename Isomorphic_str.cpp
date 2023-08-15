// 205 - leetcode
#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string b) {
    int hash[256] = {0};
    bool isTCharMapped[256] = {0};

    for(int i = 0; i < s.size(); i++){
        if(hash[s[i]] == 0 && isTCharMapped[b[i]] == 0){
            hash[s[i]] = b[i];
            isTCharMapped[b[i]] = true;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if((char)hash[s[i]] != b[i])
            return false;
    }
    return true;
}  

int main()
{
    string s = "paper", t = "title";
    cout<<isIsomorphic(s,t);
    return 0;
}