#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define pb push_back

using namespace std;

vector<string>keywords;

void Build(){
    keywords.push_back("asm");
    keywords.push_back("double");
    keywords.push_back("new");
    keywords.push_back("switch");
    keywords.push_back("auto");
    keywords.push_back("else");
    keywords.push_back("operator");
    keywords.push_back("template");
    keywords.push_back("break");
    keywords.push_back("enum");
    keywords.push_back("private");
    keywords.push_back("this");
    keywords.push_back("case");
    keywords.push_back("extern");
    keywords.push_back("protected");
    keywords.push_back("throw");
    keywords.push_back("catch");
    keywords.push_back("float");
    keywords.push_back("public");
    keywords.push_back("try");
    keywords.push_back("char");
    keywords.push_back("for");
    keywords.push_back("register");
    keywords.push_back("typedef");
    keywords.push_back("class");
    keywords.push_back("friend");
    keywords.push_back("return");
    keywords.push_back("union");
    keywords.push_back("const");
    keywords.push_back("goto");
    keywords.push_back("short");
    keywords.push_back("unsigned");
    keywords.push_back("continue");
    keywords.push_back("if");
    keywords.push_back("signed");
    keywords.push_back("virtual");
    keywords.push_back("default");
    keywords.push_back("inline");
    keywords.push_back("sizedof");
    keywords.push_back("void");
    keywords.push_back("delete");
    keywords.push_back("int");
    keywords.push_back("static");
    keywords.push_back("volatile");
    keywords.push_back("do");
    keywords.push_back("long");
    keywords.push_back("struct");
    keywords.push_back("while");

}

bool check(string s){

    for(int i=0;i<keywords.size();i++)if(s==keywords[i])return false;

    if(s.size() > 31)return false;

    bool flag = false;

    if (s[0]=='_') flag = true;
    if (s[0]>='a' and s[0]<='z') flag = true;
    if (s[0]>='A' and s[0]<='Z') flag = true;

    if(!flag)return false;

    for(int i=1;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z')continue;
        if(s[i]>='a' and s[i]<='z')continue;
        if(s[i]>='0' and s[i]<='9')continue;
        if(s[i]=='_')continue;
        return false;
    }

    return true;
}

int main(){

    Build();

    ifstream inFile;

    inFile.open("D:\\Academic\\Compiler Lab\\MyFile2.txt");

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    string s;
    bool next_is_variableName = false;

    while(inFile >> s){

        if(next_is_variableName==true and s.back()!='('){
            if(check(s))  cout<<s<<" is valid\n";
            else          cout<<s<<" is invalid\n";
        }

        next_is_variableName = false;
        if(s == "string") next_is_variableName = true;
        if(s == "bool") next_is_variableName = true;
        if(s == "int") next_is_variableName = true;
        if(s == "float") next_is_variableName = true;
        if(s == "long") next_is_variableName = true;
        if(s == "double") next_is_variableName = true;
        if(s == "char") next_is_variableName = true;
    }



}

