#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string d[10000];
char h=39;
int cv=0;
bool a=1,kg=1,jing=0;
string Vans[500]={" ","int","char","bool","#define int long long","string","ans=","int a[10000]","bool b[100000]","int dp[1500+50][1500+50]"
,"check()","int l,r,mid","for(int i=1;i<=n;i++)\n    for(int j=1;j<=n;j++)","#ifdef","string ss","dfs(1)","dfs(123)","dp[1][n]=max(dp[1][n],dp[2][n])"
,"bool a,b,c","while(1)","while(head<=tail&&qq[tail]>=a[i])","priority_queue<int>a","stack<string>a","vector<int,greater<int>,less<int> >b","addedge(a,b,w)"
"addedge(a,b,w),addedge(b,a,w)"," "};
void injectingSoul(){
    cout<<" /*";
    for(int i=1;rand()%20;i++){
        int determine=rand()%5;
        if(determine!=3){
            int s=rand()%126;
            if(s<33||char(s)=='/'||char(s)=='*'){continue;}
            int nnnnnnn=rand()%100+50;
            if(nnnnnnn==82&&cv<=150){
                cv++;
            cout<<endl;
            }
            cout<<char(s);
        }
        if(determine==3){
            int s=rand()%126;
            if(s<33||char(s)=='/'||char(s)=='*'){continue;}
                        int nnnnnnn=rand()%100+50;
            if(nnnnnnn==82&&cv<=150){
                cv++;
            cout<<endl;
            }
            int szzz=27;
            cout<<'"'<<Vans[rand()%szzz-1]<<'"';
            cout<<char(s);
        }

    }
    cout<<" */";
}
int main(int argc,char **argv){
    srand(time(0));
    if(argc!=2){
        cout<<"Error\nno input files\n";
        exit(0);
    }
    cerr<<"Put the code here\nDo Not leave note like"<<'"'<<"//"<<'"'<<endl;
    cerr<<"control-z to stop\n";
    freopen("codesouledout.cpp","w",stdout);
    int cnt=0;
    while(getline(cin,d[cnt]))cnt++;
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
                if(a==1)injectingSoul();
                continue;
            }
            if(d[i][j]=='{'||d[i][j]=='}'||d[i][j]=='('||d[i][j]==')'){
                if(a==1)injectingSoul();
                cout<<d[i][j];
                continue;
            }
            cout<<d[i][j];
        }
        if(jing==1){
            cout<<endl;
        }
    }
}
