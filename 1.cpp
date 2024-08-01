#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int r,c;
    cin>>r>>c;
    vector<vector<int>> p(c,vector<int>(r));
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int n;
            cin>>n;
            p[j][i]=n;

        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;

    }


}
