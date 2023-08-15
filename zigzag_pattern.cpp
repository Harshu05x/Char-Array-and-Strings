#include <iostream>
#include <string>
#include <vector>
using namespace std;


string convert(string s, int num) {
    if(num == 1) return s;
    vector <string> zigzag(num);
    int i = 0, row = 0;
    bool direction = 1; // 1 --> top to bottom

    while(i < s.size()){
        // Direction is top bottom
        // add char from s[i] to row th index of vector zigzag
        // i++ , row++;
        if(direction == 1){
            while(row < num && i < s.size()){
                zigzag[row++].push_back(s[i++]);
            }
            // row always strats from second last index
            row = num - 2;
        }
        // Direction is bottom to top
        // add char from s[i] to row th index of vector zigzag
        // i++ , row--;
        else{
            while(row >= 0 && i <s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            // row always strats from 1st index
            row = 1;
        }
        // change the direction
        direction = !direction;
    }
    // push back all char in ans string
    string ans = "";
    for(int i = 0; i < zigzag.size(); i++){
        ans += zigzag[i];
    }
    return ans;
}


int main()
{
    string s = "PAYPALISHIRING"; 
    int numRows = 3;
    cout<<convert(s,numRows)<<endl;
    return 0;
}