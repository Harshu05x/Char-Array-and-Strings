#include <iostream>
#include <string>
using namespace std;
string remove_duplicates(string s){
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        if((ans.length() > 0) && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
    }
    return ans;
}  
int main()
{
    string str = "abbaca";
    cout<<remove_duplicates(str)<<endl;
    return 0;
}