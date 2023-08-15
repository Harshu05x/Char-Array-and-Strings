// 767 - leetcode
#include <iostream>
#include <string>
using namespace std;


string reorganizeString(string s) {
    int hash[26] = {0};

    // 1] create count hash
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    // 2] Find most freq char
    char most_freq_char;
    int max_freq = INT32_MIN;

    for(int i = 0; i < 26; i++){
        if(hash[i] > max_freq){
            max_freq = hash[i]; 
            most_freq_char = i + 'a';
        }
    }

    // 3] Palce most freq char
    int index = 0;
    while(max_freq > 0 && index < s.size()){
        s[index] = most_freq_char;
        max_freq--;
        index += 2;
    }
    // 4] if not possible then return empty string
    if(max_freq != 0) return "";

    hash[most_freq_char - 'a'] = 0;

    // 5] Place other char with 1 index gap
    for(int i = 0; i < 26; i++){
        while(hash[i] > 0){
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }
    return s;
}
int main()
{
    string s = "aab";
    cout<<reorganizeString(s)<<endl;
    return 0;
}