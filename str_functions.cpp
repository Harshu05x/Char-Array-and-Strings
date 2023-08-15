#include <iostream>
#include <string>
using namespace std;
                   
int main()
{
    // string str;
    // cout<<"Enter: ";
    // getline(cin,str);
    // cout<<"Lenght: "<<str.length()<<endl;
    // cout<<"Is empty: "<<str.empty()<<endl;

    // str.push_back('#');
    // cout<<str<<endl;
    
    // str.pop_back();
    // cout<<str<<endl;

    // cout<<"Substring: "<<str.substr(0,5)<<endl;

    // string a = "Aishu";
    // string b = "Aishu";
    // a.compare(b) == 0 ? cout<<"Equal\n" : cout<<"Not equal\n";

    // string a = "Hi everyone, How are you guys";
    // string b = "you";
    // string c = "Harshu";

    // cout<<a.find(b)<<endl;
    // cout<<a.find(c)<<endl;

    // a.find(b) == string::npos ? cout<<"Not found\n" : cout<<"Found at "<<a.find(b)<<endl;
    // a.find(c) == string::npos ? cout<<"Not found\n" : cout<<"Found at "<<a.find(c)<<endl;

    string sen = "We will live happly everyafter.";
    // string str1 = "Harshu";
    // string str2 = "Aishu ";

    // sen.replace(0,2,str1);
    // sen.replace(7,0,"and ");
    // sen.replace(11,0,str2);
    // cout<<sen<<endl;
    
    sen.erase(11,5);
    cout<<sen<<endl;

    string str = "";
    cout<<"Length"<<str.length()<<endl;
    return 0;
}