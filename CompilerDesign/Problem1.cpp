#include<bits/stdc++.h>
#include<fstream>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    ifstream inFile;

    inFile.open("D:\\Academic\\Compiler Lab\\MyFile.txt");

    string line;

    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    int number_of_char = 0;
    int number_of_alphabets = 0;
    int number_of_digits = 0;
    int number_of_spaces = 0;
    int number_of_lines = 0;

    while (getline(inFile,line)) {

        int len = line.size();

        number_of_char += len;
        number_of_lines++;


        for(int i=0;i<len;i++){
            if(line[i]>='a' and line[i]<='z')number_of_alphabets++;
            if(line[i]>='A' and line[i]<='Z')number_of_alphabets++;

            if(line[i] >= '0' and line[i] <= '9') number_of_digits++;

            if(line[i] == ' ') number_of_spaces++;
        }
    }

    inFile.close();

    cout<<"Number of characters: "<<number_of_char<<"\n";
    cout<<"Number of alphabets: "<<number_of_alphabets<<"\n";
    cout<<"Number of digits: "<<number_of_digits<<"\n";
    cout<<"Number of spaces: "<<number_of_spaces<<"\n";
    cout<<"Number of lines: "<<number_of_lines<<"\n";

}

