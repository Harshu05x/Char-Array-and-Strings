#include <iostream>
#include <string.h>
using namespace std;

void upper_to_lower(char ch[]){
    int i = 0;

    while(ch[i] != '\0'){
        if(ch[i] >= 'A' && (int)ch[i] <= 'Z'){
            // ch[i] = ch[i] - 'A' + 'a'; // we can do by this way also
            ch[i] += 32;
        }
        i++;
    }
}
void lower_to_upper(char ch[]){
    int i = 0;

    while(ch[i] != '\0'){
        if(ch[i] >= 'a' && (int)ch[i] <= 'z'){
            // ch[i] = ch[i] - 'a' + 'A'; // we can do by this way also
            ch[i] -= 32;
        }
        i++;
    }
}

int main()
{
    char ch[100];
    cout<<"Enter string: ";
    cin.getline(ch,50);
    upper_to_lower(ch);
    cout<<ch<<endl;
    lower_to_upper(ch);
    cout<<ch<<endl;
    return 0;
}