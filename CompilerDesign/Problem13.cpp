#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

string s;

void input();

void solve(){
    stack<char>st;

    vector<pair<pair<int,int>,int> >vec;    //{{precedence,type},index}

    map<int,char>mp;

    mp[0] = '/';
    mp[1] = '*';
    mp[2] = '+';
    mp[3] = '-';

    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int sz = st.size();

        if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){
            st.pop();
        }
        else if(ch=='/'){
            vec.push_back({{-sz,0},i});
        }
        else if(ch=='*'){
            vec.push_back({{-sz,1},i});
        }
        else if(ch=='+'){
            vec.push_back({{-sz,2},i});
        }
        else if(ch=='-'){
            vec.push_back({{-sz,3},i});
        }
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<vec.size();i++){
        cout<<mp[vec[i].first.second]<<" "<<vec[i].second<<"\n";
    }
}

void Clear(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    solve();
    Clear();

}

void input(){
    cin>>s;
}
