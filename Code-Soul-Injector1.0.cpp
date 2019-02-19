#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string d[10000];
char h=39;
bool a=1,kg=1,jing=0;
int main(){
    int cnt=0;
    while(getline(cin,d[cnt]))
    {
        cnt++;//ctrl+z to stop
    }
    for(int i=0;i<cnt;i++){
        int sz=d[i].size();
        a=1,kg=0,jing=0;
        for(int j=0;j<sz;j++){
            if(d[i][j]=='#'){jing=1;}
            if(d[i][j]==h||d[i][j]=='"'){
                a=0;kg=1;
            }
            if(d[i][j]==' '){
                if(a==0&&kg==1){cout<<d[i][j];}
                if(a==1)cout<<" /*injecting soul*/ ";
                continue;
            }
            if(d[i][j]=='{'||d[i][j]=='}'||d[i][j]=='('||d[i][j]==')'){
                if(a==1)cout<<" /*injecting soul*/ ";
                cout<<d[i][j];
                continue;
            }
            cout<<d[i][j];
        }
        if(jing==1){
            cout<<endl;
        }
    }
    system("pause");
}
