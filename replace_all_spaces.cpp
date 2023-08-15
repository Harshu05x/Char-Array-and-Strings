#include <iostream>
#include <string.h>
using namespace std;

void replace_spaces(char ch[]){
    int i = 0;
    int n = strlen(ch);
    while(i < n){
        if(ch[i] == ' '){
            ch[i] = '@';
        }
        i++;
    }
}
                   
int main()
{
    char ch[100];
    cout<<"Enter name: ";
    cin.getline(ch,50);
    cout<<"Before space replacement: "<<ch<<endl; 
    replace_spaces(ch);
    cout<<"After space replacement: "<<ch<<endl; 

    return 0;
}