#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;


int main(){

    ifstream inFile;

    inFile.open("D:\\Academic\\Compiler Lab\\Comments.txt");

    string s;

    stack<int>st;

    while(getline(inFile,s)){

        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                cout<<s[i];

                if(s.size()>1 and i>0){
                    if(st.top()==2 and s[i]=='/' and s[i-1]=='*')st.pop();
                }
            }
            else if(s.size()>1 and i>0){
                if(s[i-1]=='/' and (s[i]=='*' or s[i]=='/')){
                    if(s[i]=='/')st.push(1);
                    if(s[i]=='*')st.push(2);
                    cout<<s[i-1]<<s[i];
                }
            }
        }

        if(!st.empty()){
            if(st.top()==1)st.pop();
        }
        cout<<"\n";
    }

}


