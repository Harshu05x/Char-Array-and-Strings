#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int min_diff(vector<string>& timePoints){
    // 1] Convert all into mintues
    vector <int> mintues;
    for(int i = 0; i < timePoints.size(); i++){
        string curr = timePoints[i];
        int hr = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        mintues.push_back(hr*60+min);
    }

    // 2] Sort 
    sort(mintues.begin(),mintues.end());

    // 3] Find min diff
    int diff = INT32_MAX;
    for(int i = 0; i < mintues.size()-1; i++){
        diff = min(diff,mintues[i+1] - mintues[i]);
    }

    // 4] Check circular also
    int last_diff1 = (mintues[0]+1440) - mintues[mintues.size()-1];
    int last_diff2 = (mintues[mintues.size()-1] - mintues[0]);
    int last_diff = min(last_diff1,last_diff2);
    diff = min(diff,last_diff); 
    return diff;
}
                   
int main()
{
    vector <string> timesPoints{"00:00","23:59","00:00"};  
    cout<<min_diff(timesPoints)<<endl;
    return 0;
}