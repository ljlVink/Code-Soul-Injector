#include<bits/stdc++.h>
#include<iostream>
#include<regex>
using namespace std;
string d[1000000+500];
char h=39;
int cv=0;
bool a=1,kg=1,jing=0;

string guanjianzi[500]={"bool","true","false","char","int","double","long","signed","switch","case",
						"default","do","for","while","if","else","break","continue","const","extern",
						"export","public","protected","private","static","struct","class","template","mutable","virtual",
						"try","friend","operator","register","using","namespace","void","return","sizeof","this",
						"cin","cout","scanf","string","std","endl","cerr","freopen","stdin","stdout",
						"getline","srand","time","stack","vector","queue","priority_queue","greater","less","max",
						"min","sort",""};
string chars1[500]={";","\\(","\\)","\\*","\\&","\\^","\\~","\\[","\\]","\\{","\\}","\\,","\\+\\+","\\?","-=","\\+=","\\/"};
string chars[500]={";","(",")","*","&","^","~","[","]","{","}",",","++","?","-=","+=","/"};//16

string aa1[500]={" _oo0o00oO0oo00 "," _oOo0OOOOOoo0 "," _OO0OOoo0o0O0 ",
				" _O00oO0OOO00ooO "," _oOoOooo0 "," _0OoO0ooO0o ",
				" _OO00oOoOooOO0 "," _0oOooo0OooO ",
				" _OO00O0oooOOo ",
				" _ooo0oOooOO0O00 "," _Oo00o0O0OO "," _0OOO0OooOO0 "," _oo000O0OO "," _oo000ooooo00 "," _oO0o0o0OOOoOo "," _0OOOOOoO0oo "," _00ooOOOOO0o00O "," _0ooOoo000o0 "," _O0O00O00o "," _0OooOoOO00 "," _0O0Ooo0o00o "," _OooOO0O0o0 "," _O0o0OOo0Oooo0 "," _O00000OO "," _oooo0Oo0o "," _OOo0OOO000o "," _oo0OO0OoOoOoo0 "," _oOO0oO00oo "," _o0000oO0OO "}; 
string aa[500]={"_OoooOo0OOo0","_ooOo0OOo00o","_OOOOo0O0O0Oo","_00o0O00OOOOoO","_00Ooo0OOO","_00Oo000oo0","_0Oo0Oo0oOOo00","_OOooO0000o0O","_OOoo0Oo0OOoO","_OOoO0Oo00O00","_0Oo0O0oOo0o","_0ooOoO0oOo0o","_OO0Oooo0O","_o0oo0ooo000O0","_OO0OOooo00","_OooooOO0oO0","_0OOooO0000OO0","_o000o0oOoO0o","_OOOo0O0o0oo0","_o00o0ooOoOo","_0OOO0OOoO","_ooO00oooo0oO","_0o00o00O","_O0o0O0Ooooo0","_0O0OooO0O0","_0O000OOO0oOOO","_oOoOoo0ooO0O","_00OOoO0OoOo","_O0OOoOOOo0oO0","_OooO0OoOoo","_0oooOOO0o0OOO","_oOoooO0oO0","_0OoO00oO0O","_0OOOo000Oo0o","_oOo0Ooooo","_OoO0oo00OOoOO","_Oo0oooOO0","_oOo0OO0","_000OOo0oOO0","_0oO0oOo","_OOoOOOO0OoOO","_0OOOoOO0O","_ooOOooO0o0","_oo00ooOooO0O","_00OOO0OOO0ooo","_00ooOOOOoO","_oo00oOo","_ooOO000OO0o","_o0O00ooOoo","_Oo000OO00oOOO","_ooOo0OoO0oo0","_0OOOoO00Oo","_OO0oO0oO0o0","_0oooooO00OOoo","_000OO00000o","_0O0oOooOoO0","_Oo0OoO0OO","_0oo00O0OoO0Oo","_0ooOoOoooo00","_Ooo0O0O0oo","_000oooO0O0OO","_o000OOoo0ooo","_oOoOOooooOOo","_OoO00OOooO0","_OOoo000OOoOOO","_0o0oooOoO0","_oOOoo00OOO0o0","_O0OooOo00O","_ooO0oO0oO0OOo","_oOo0OoO0OoO","_00o0OO00oo","_Oooo0Oo00o0","_0ooo00Ooo","_OoOOoOO0000o","_oooOO0o0","_00o00oOO000O","_ooO00o0oOOOo","_OooOO0OO000000","_0O00O0ooo0Oo","_oOOo0OOoOOO0oo","_oO0O00OooOOoo","_oO0OoO0000OO","_0ooO00OO00oO","_oOoOoOO0o0","_0oOOO0Ooo0o0O","_OOOOOOO0oOO0O","_00oO0oooOO0o","_0o0O0ooooO0","_o0OOoO0OoOo0","_0OOoOo0O0OO","_00OO0O00O0","_00OO00o00oOO","_0OOoO00OOO0O","_oOoOO00OoOO","_0Oo0o0oOoo0","_0Oo00O0000","_ooOoooOO0OooO","_0o0o0o0o0o0o","_oOo0O00OOOO","_oO0o0OOOooooO"};
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
	if(regex_search(str,regex("#include"))){
		return str;
	}
	regex re(pattern1);
    string ret=regex_replace(str,re,fmt);
    return ret;
}
string replace1(string str,string pattern,string fmt) {
	regex re(pattern);
	bool rx=0;
	if(regex_search(str,regex("#include"))){
		return str;
	}
    string ret=regex_replace(str,re,fmt);
    return ret;
}
void make(){
	for(int i=0;i<62;i++){
		cout<<"#define "<<aa[i]<<" "<<guanjianzi[i]<<endl;
	}
	for(int i=0;i<17;i++){
		cout<<"#define"<<aa1[i]<<" "<<chars[i]<<endl;
	}
}
int main(int argc,char * * argv){
    srand(time(0));
    cerr<<"Put the code here\nDo Not leave note like"<<'"'<<"//"<<'"'<<endl;
    cerr<<"control-z to stop\n";
    freopen("codesouledout.cpp","w",stdout);
    make();
    int cnt=0;
    while(getline(cin,d[cnt])){
    	int sz=62,szc=17;
    	for(int i=0;i<sz;i++){
    		
			d[cnt]=replaceSpace(d[cnt],guanjianzi[i],aa[i]);
		}
		for(int i=0;i<szc;i++){
			d[cnt]=replace1(d[cnt],chars1[i],aa1[i]);
		}
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
