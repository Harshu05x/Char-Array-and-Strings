// 8 - leetcode
#include <iostream>
#include <string>
using namespace std;

int myAtoi(string s) {
    int num = 0, i = 0, sign = 1;

    // 1] Remove leading whitespaces
    while(s[i] == ' ') i++;

    // 2] Check sign
    if(i < s.size() && (s[i] == '-' || s[i] == '+')){
        sign = s[i] == '+' ? 1 : -1;
        i++;
    } 

    // 3] Convert char to num
    while(i < s.size() && isdigit(s[i])){
        // Ensure that num never goes out of bound
        if(num > INT32_MAX / 10 || (num == INT32_MAX/10 && s[i] > '7')){
            return sign == -1 ? INT32_MIN : INT32_MAX;
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num*sign;
}  
int main()
{
    string a =  "   -42";
    string b = "4193 with words";
    cout<<myAtoi(a)<<endl<<myAtoi(b)<<endl;
    // atoi - built in function (it takes char string as an input)
    cout<<atoi(a.c_str())<<endl;
    cout<<atoi(b.c_str())<<endl;
    return 0;
}