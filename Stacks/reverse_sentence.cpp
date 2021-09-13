#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

// void reverseSentence(string s){
//     stack<string> str;
//     for(int i=0;i<s.length();i++){
//         string word="";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         str.push(word);
//     }
//     while(!str.empty()){
//         cout<<str.top()<<" ";
//         str.pop();
//     }
// }
// string reverseSentence(string s)
// {
//     stack<char> str;
//     string res="";
//     int i;
//     for(int i=0;i<s.length();i++){
//         if(s[i]!='.'){
//             str.push(s[i]);
//         }
//         else{
//             while(!str.empty()){
//                 res+=str.top();
//                 str.pop();
//             }
//             res+=".";
//         }
//     }
//     while(!str.empty()){
//         res+=str.top();
//         str.pop();
//     }
//     return res;
// }


char *reverseSentence(char s[], int len)
{
    stack<char> str;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        str.push(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = str.top();
        str.pop();
    }
    return s;
}

int main()
{
    // char str[]= "fVskVrSsOY";
    //  char * ch = reverseSentence(str,15);
    //  cout<<ch;

    // char str[] = "GeeksforGeeks";
    // cout << reverseSentence(str, 15);
    string str = "20-3+5*2";
    cout<<reverseSentence(str);
    // string str = "20-3+5*2";
    // reverseSentence(str);
}