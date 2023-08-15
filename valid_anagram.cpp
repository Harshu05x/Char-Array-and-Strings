//  234 - leetcode
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Method 1] Sort and compare
bool isAnagram(string &s, string &t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.compare(t) == 0)
        return true;
    return false;
}

// Mwthod 2] Create freq table and check
bool isAnagram_01(string &s, string &t) {
    int freq_table[256] = {0};

    for(int i = 0; i < s.size(); i++){
        freq_table[s[i]]++;
    }

    for(int i = 0; i < t.size(); i++){
        freq_table[t[i]]--;
    }

    for(int i = 0; i < 256; i++){
        if(freq_table[i] != 0)
            return false;
    }
    return true;

}

int main()
{
    string s = "anagram", t = "nagaram" ;
    cout<<isAnagram(s,t);
    return 0;
}