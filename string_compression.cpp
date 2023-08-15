// 443 - leetcode
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int compress(vector<char>& s) {
    int index = 0 , count = 1;
    char prev = s[0];

    // 1] use two ptrs
    for(int i = 1; i < s.size(); i++){
        // if ith and prev char are same then count++
        if(s[i] == prev){
            count++;
        }
        // store the prev char then store count digit wise if it is greater than 1 
        else{
            s[index++] = prev;
            int start = index;
            if(count > 1){
                while(count){
                    s[index++] = (count  % 10) + '0';
                    count /= 10;
                }
                // count get stored reversely so we need to reverse it
                reverse(s.begin()+start,s.begin()+index);
            }
            prev = s[i];
            count = 1;
        }
    }
    // save the last char and its count
    s[index++] = prev;
    int start = index;
    if(count > 1){
        while(count){
            s[index++] = count  % 10 + '0';
            count /= 10;
        }
            reverse(s.begin()+start,s.begin()+index);
    }
    count = 1;
    return index;
}                  
int main()
{
    vector <char> s {'a','a','b','b','b','c','c'};
    int index = compress(s);

    for(int i = 0; i < index; i++){
        cout<<s[i]<<" ";
    }
    return 0;
}