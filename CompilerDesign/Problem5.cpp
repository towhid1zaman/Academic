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

    for(int i=0;i<keywords.size();i++)if(s==keywords[i])return true;

    return false;
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

    while(inFile >> s){

        if(check(s))    cout<<s<<" is a keyword\n";

    }

}

