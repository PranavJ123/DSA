// #include<iostream>
// #include<string.h>
// using namespace std;

// void printPermutation(string s, string ans){
//     if(s.length() == 0){
//         cout<<ans<<endl;
//         return;
//     }

//     for(int i =0 ; i< s.length() ; i++){
//         char ch = s.at(i);
//         string left = s.substr(0,i);
//         string right = s.substr(i+1);
//         string ros = left + right;
//         printPermutation(ros,ans+ch);
//     }
// }

// int main(){
//     printPermutation("ABC","");
// }


#include<iostream>
#include<vector>
using namespace std;

vector<string>find_permutation(string S){
    vector<string> ans;
    vector<string> ch;
    vector<string> left;
    vector<string> right;
    vector<string> ros;

    if(S.size() ==0){
        ans.push_back(S);
        return ans;
    }
    for(int i=0;i<S.size();i++){
        ch.push_back(S.at(i));
        left.push_back(S.substr(0,i));
        right.push_back(S.substr(i+1));
        ros.push_back(left+right);
        find_permutation(ros);
    }

    
}

int main(){
    vector<string> s;
    s = find_permutation("abc");
    cout<<s[0];
}


