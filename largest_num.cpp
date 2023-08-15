// 179 - leetcode
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;


static bool myComp(string a, string b){
    // a = 30 , b = 3
    // t1 = 303 , t2 = 330
    // t1 > t2 means a > b
    // t1 < t2 means a < b
    string t1 = a + b; 
    string t2 = b + a; 
    return t1 > t2;
}

string largestNumber(vector<int>& nums) {
    vector<string> snums;
    for(auto s : nums){
        snums.push_back(to_string(s));
    }

    sort(snums.begin(),snums.end(),myComp);

    if(snums[0] == "0") return "0";
    string ans = "";
    for(auto s : snums){
        ans += s;
    }
}
                   
int main()
{
    vector <int> nums = {3,30,34,5,9}; 
    string ans = largestNumber(nums);
    cout<<ans<<endl;
    cout<<largestNumber(nums)<<endl;
    return 0;
}