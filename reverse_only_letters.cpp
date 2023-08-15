// 917 - leetcode
#include <iostream>
#include <string>
using namespace std;

string reverse_str(string s){
    int i = 0, j = s.size()-1;
    while(i <= j){
        if(isalpha(s[i]) && isalpha(s[j])){
            swap(s[i++],s[j--]);
        }
        else if(!isalpha(s[i])) i++;
        else j--;

    }
    return s;
}

int main()
{
    string s = "Test1ng-Leet=code-Q!";
    string rev_str = reverse_str(s);
    cout<<rev_str<<endl;
    return 0;
}