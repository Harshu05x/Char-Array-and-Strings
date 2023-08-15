#include <iostream>
#include <string.h>
using namespace std;

void reverse(char ch[]){
    int i = 0;
    int j = strlen(ch)-1;

    while(i <= j){
        swap(ch[i++],ch[j--]);
    }

    // for(; i <= j; i++,j--){
    //     swap(ch[i],ch[j]);
    // }
}
                   
int main()
{
    char ch[100];
    cout<<"Enter string: ";
    cin.getline(ch,99);
    reverse(ch);
    cout<<"Reversed stirng: "<<ch<<endl;
    return 0;
}