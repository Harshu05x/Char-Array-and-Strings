// 500 - leetcode
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map <char,int> mp{{'Q',1},{'W',1},{'E',1},{'R',1},{'T',1},{'Y',1},{'U',1},{'I',1},{'O',1},{'P',1},
                            {'A',2},{'S',2},{'D',2},{'F',2},{'G',2},{'H',2},{'J',2},{'K',2},{'L',2},
                            {'Z',3},{'X',3},{'C',3},{'V',3},{'B',3},{'N',3},{'M',3}};

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(int i = 0; i < words.size(); i++){
            string curr = words[i];
            int code = mp[toupper(curr[0])];
            int flag = 0;
            for(int j = 0; j < curr.size(); j++){
                if(mp[toupper(curr[j])] != code){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) ans.push_back(curr);
        }
        return ans;
    }

int main()
{
    vector<string> words{"Hello","Alaska","Dad","Peace"};
    vector<string> ans;
    ans = findWords(words);

    for(auto i : ans) cout<<i<<" ";
    return 0;
}