// 12 - leetcode
#include <iostream>
#include <map>
#include <string>
using namespace std;


string intToRoman(int num) {
    string roman_symbols[] = {"M","CM","D","CD","C","XC",
                                "L","XL","X","IX","V","IV","I"};
    int values [] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans = "";

    for(int i = 0; i < 13; i++){
        while(num >= values[i]){
            ans += roman_symbols[i];
            num -= values[i];
        }
    }
    return ans;
}


int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<intToRoman(num)<<endl;
    return 0;
}