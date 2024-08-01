#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int> mp;
int i=0;
while(i<s.length()){
        mp[s[i]]++;
        i++;
}
for( auto  ch=mp.begin();ch!=mp.end();ch++){
    cout<<ch->first<<"->"<<ch->second;
    cout<<endl;
}
}
