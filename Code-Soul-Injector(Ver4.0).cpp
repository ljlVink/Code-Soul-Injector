#include<bits/stdc++.h>
#include<iostream>
#include<regex>
using namespace std;
string d[1000000+500];
char h=39;
int cv=0;
bool a=1,kg=1,jing=0;

string guanjianzi[500]={"bool","true","false","char","int","double","long","signed","switch","case","default",
"do","for","while","if","else","break","continue","const","extern","export","public","protected","private","static",
"struct","class","template","mutable","virtual","try","friend","operator","register","using","namespace","void","return","sizeof","this","cin","cout"};

string aa[500]={"_ooOoO","_OOo0O","_O0000","_O0oOO","_OooOO","_00o000","_000OO0","_OoO000","_Oo00OoOO","_O00oo0Oo",
"_0O000O","_0OO0","_O00OOo","_0ooo0oO","_Oooo00O","_ooOo0","_0OoOO0","_Oo0ooOO","_ooOo","_O0oOo0O","_o0o0Ooo","_0o0o0o","_OO0o00oO","_oo0o0",
"_OOO00","_Ooo0oO00","_OoO00o","_oOo0oO","_000OoOO","_00OoOOO","_oOoo","_O0OoO0O","_O0oO00","_0oOoOo","_o00oOo","_0oOoO",
"_oOo","_o00o0","_0ooO0o","_ooOoo","_OO0oO00","_0OoOO00","_OO000o","_OoO0","_0OO000","_0oo0oO","_o00","_o0o0oO"};
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
            int pd=rand()%szzz-1;
            if(pd==-1){
            	pd=0;
			} 
            cout<<'"'<<Vans[pd]<<'"';
            cout<<char(s);
        }
    }
    cout<<" */";
}

string  replaceSpace(string str,string pattern,string fmt) {
	string pattern1;
	pattern1+="\\b";
	pattern1+=pattern;
	pattern1+="\\b";
	regex re(pattern1);
    string ret=regex_replace(str,re,fmt);
    return ret;
}
void make(){
	for(int i=0;i<42;i++){
		cout<<"#define "<<aa[i]<<" "<<guanjianzi[i]<<endl;
	}
}
int main(int argc,char **argv){
    srand(time(0));
    cerr<<"Put the code here\nDo Not leave note like"<<'"'<<"//"<<'"'<<endl;
    cerr<<"control-z to stop\n";
    freopen("codesouledout.cpp","w",stdout);
    make();
    int cnt=0;
    while(getline(cin,d[cnt])){
    	int sz=42;
    	for(int i=0;i<sz;i++){
			d[cnt]=replaceSpace(d[cnt],guanjianzi[i],aa[i]);
		}
		int sz1=d[cnt].size();
    	cnt++;
	}
    for(int i=0;i<cnt;i++){
        int sz=d[i].size();
        a=1,kg=0,jing=0;
        for(int j=0;j<sz;j++){
            if(d[i][j]=='#'){jing=1;}
            if(d[i][j]==h||d[i][j]=='"'){
                a=0;kg=1;
            }
            else if(d[i][j]==' '){
                if(a==0&&kg==1){cout<<d[i][j];}
                if(a==1)injectingSoul();
                continue;
            }
            else if(d[i][j]=='{'||d[i][j]=='}'||d[i][j]=='('||d[i][j]==')'){
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
    return 0;
}
