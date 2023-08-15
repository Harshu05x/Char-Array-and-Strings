#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

bool palindrome(char ch[]){
   int i = 0;
   int j = strlen(ch) - 1;

   while (i <= j){
        if(ch[i++] != ch[j--])
        return 0;
   }
   return 1;
   
}

int main()
{
    char ch[100];
    cout<<"Enter name: ";
    cin.getline(ch,50);
    palindrome(ch) == 1 ? cout<<"It's a palindrome" : cout<<"It's not a plaindrome";
    return 0;
}