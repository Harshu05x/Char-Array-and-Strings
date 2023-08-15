#include <iostream>
#include <string>
using namespace std;

bool compare_str(string str1, string str2){
    if(str1.length() != str2.length())
        return false;
    
    int i = 0;
    while(i < str1.length()){
        if(str1[i] != str2[i++])
            return false;
    }
    return true;

}

int main()
{
    string a = "Aishu";
    string b = "aishu";

    compare_str(a,b) ? cout<<"Equal\n" : cout<<"Not equal\n";
    return 0;
}