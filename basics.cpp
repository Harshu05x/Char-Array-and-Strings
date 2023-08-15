#include <iostream>
#include <string.h>
using namespace std;
                   
int main()
{
    // char ch[100];
    // cout<<"Enter name: ";
    // cin.getline(ch,50);
    // cout<<ch<<endl; 

    // int length = 0;
    // int i = 0 ;
    // while(ch[i++] != '\0')  length++;
    // cout<<"Length: "<<length<<endl;
    // cout<<"Length: "<<strlen(ch)<<endl;

    // string str;

    // // cin>>str;
    // // cout<<str<<endl;
    // cout<<"Enter: ";
    // getline(cin,str);
    // cout<<str<<endl;

    char ch[100];
    // cout<<"Enter: ";
    // cin.getline(ch,99);
    ch[4] = '\0';
    ch[10] = '\0';
    ch[14] = '\0';
    // cout<<ch<<endl;

    string str;
    cout<<"Enter: ";
    getline(cin,str);
    str[4] = '\0';
    str[10] = '\0';
    str[14] = '\0';

    cout<<str<<endl;

    return 0;
}