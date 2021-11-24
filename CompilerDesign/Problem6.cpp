#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define pb push_back

using namespace std;

bool check(string s){
    int sz = s.size();
    for(int i=0;i<sz;i++){
        if(s[i]=='[' and i==0)continue;
        if(s[i]=='=' and i==0)continue;
        if(s[i]==';' and i==sz-1)continue;
        if(s[i]==',' and i==sz-1)continue;
        if(s[i]==']' and i==sz-1)continue;
        if(s[i]>='0' and s[i]<='9')continue;
        return false;
    }
    return true;
}

int main(){

    ifstream inFile;

    inFile.open("D:\\Academic\\Compiler Lab\\DigitFile.c");

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    string s;

    while(inFile >> s){

        if(check(s))    {
            int cnt = 0;
            for(int i=0;i<s.size();i++){
                if(s[i]>='0' and s[i]<='9'){
                    cnt++;
                    cout<<s[i];
                }
            }
            if(cnt>0)cout<<" is a number\n";
        }

    }

}

