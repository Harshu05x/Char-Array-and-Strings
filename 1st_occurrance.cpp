// 28 - leetcode
#include <iostream>
#include <string>
using namespace std;

// Method 1]  using find function
int first_occur(string haystack, string needle) {
    if(haystack.find(needle) == string::npos)
        return -1;
    return haystack.find(needle);
}

// Method 2]  using substr func
int first_occur_01(string str1, string str2) {
    int i = 0, j = 0;
    while(i < str1.size()){
        string s = str1.substr(i,str2.size());
        if(s == str2)
            return i;
        i++;
    }
    return -1;
}

// Mwthod 3]  sliding window technique
int first_occur_02(string str1, string str2) {
    int n = str1.size(), m = str2.size();

    for(int i = 0; i <= n-m; i++){
        for(int j = 0; j < m; j++){
            if(str2[j] != str1[i+j])
                break;
            if(j == m-1)
                return i;
        }
    }
    return -1;
}



int main()
{
    string haystack = "leetcode", needle = "leeto";
    string haystack1 = "sadbutsad", needle1 = "sad";
    cout<<first_occur(haystack,needle)<<endl;
    cout<<first_occur(haystack1,needle1)<<endl<<endl;;
    cout<<first_occur_01(haystack,needle)<<endl;
    cout<<first_occur_01(haystack1,needle1)<<endl<<endl;
    cout<<first_occur_02(haystack,needle)<<endl;
    cout<<first_occur_02(haystack1,needle1)<<endl;
    return 0;
}