// 345 - leetcode
#include <iostream>
#include <string>
using namespace std;


bool isvowel(char ch){
    ch = tolower(ch);
    return  ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.length()-1;
    while(i < j){
        if(isvowel(s[i]) && isvowel(s[j])){
            swap(s[i++],s[j--]);
        }
        else if(!isvowel(s[i])) i++;
        else j--;
    } 
    return s;
}

int main()
{
    string s = "leetcode";
    string rev_str = reverseVowels(s);
    cout<<rev_str<<endl;
    return 0;
}