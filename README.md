# Code-Soul-Injector4.0beta

请先把注释都删干净
对于#define 建议都放在前面

对
```cpp
#include<babaaba.h>
#define ......
#define .......
#define ........
#define .........
```
加密后会产生错误
```cpp
#include<babaaba.h>
#define ......
#define .......
#define ........

using namespace std;
#define .........

```


代码混淆器
举个例子
```cpp
#include<bits/stdc++.h>
using namespace std;
int N; 
struct node
{
	int begin,end;
}m[5005];
bool cmp(node a,node b)
{
	return a.begin<b.begin;
}
int main()
{
	scanf("%d",&N);
	for(register int i=1;i<=N;++i)
		scanf("%d%d",&m[i].begin,&m[i].end);
	sort(m+1,m+1+N,cmp);
	int begin=m[1].begin;
	int end=m[1].end;
	int ans1=0,ans2=0;
	for(register int i=2;i<=N;++i)
	{
		if(m[i].begin<=end)
			end=max(end,m[i].end);
		else
		{
			ans1=max(ans1,end-begin);
			ans2=max(ans2,m[i].begin-end);
			begin=m[i].begin;
			end=m[i].end;
		}
	}
	ans1=max(ans1,end-begin);
	printf("%d %d",ans1,ans2);
 	return 0;
}

```
1.0灵魂注入后
``` cpp
#include<bits/stdc++.h>
using /*injecting soul*/ namespace /*injecting soul*/ std;int /*injecting soul*/ N; /*injecting soul*/ struct /*injecting soul*/ node /*injecting soul*/ {int /*injecting soul*/ begin,end; /*injecting soul*/ }m[5005];bool /*injecting soul*/ cmp /*injecting soul*/ (node /*injecting soul*/ a,node /*injecting soul*/ b /*injecting soul*/ ) /*injecting soul*/ {return /*injecting soul*/ a.begin<b.begin; /*injecting soul*/ }int /*injecting soul*/ main /*injecting soul*/ ( /*injecting soul*/ ) /*injecting soul*/ {scanf /*injecting soul*/ ("%d",&N);for /*injecting soul*/ (register /*injecting soul*/ int /*injecting soul*/ i=1;i<=N;++i /*injecting soul*/ )scanf /*injecting soul*/ ("%d%d",&m[i].begin,&m[i].end);sort /*injecting soul*/ (m+1,m+1+N,cmp /*injecting soul*/ );int /*injecting soul*/ begin=m[1].begin;int /*injecting soul*/ end=m[1].end;int /*injecting soul*/ ans1=0,ans2=0;for /*injecting soul*/ (register /*injecting soul*/ int /*injecting soul*/ i=2;i<=N;++i /*injecting soul*/ ) /*injecting soul*/ {if /*injecting soul*/ (m[i].begin<=end /*injecting soul*/ )end=max /*injecting soul*/ (end,m[i].end /*injecting soul*/ );else /*injecting soul*/ {ans1=max /*injecting soul*/ (ans1,end-begin /*injecting soul*/ );ans2=max /*injecting soul*/ (ans2,m[i].begin-end /*injecting soul*/ );begin=m[i].begin;end=m[i].end; /*injecting soul*/ } /*injecting soul*/ }ans1=max /*injecting soul*/ (ans1,end-begin /*injecting soul*/ );printf /*injecting soul*/ ("%d %d",ans1,ans2); /*injecting soul*/ return /*injecting soul*/ 0; /*injecting soul*/ }
```
2.0注入后
``` cpp
#include<bits/stdc++.h>
using /*aV#XJZ:Z<U[nLQWg+dP801fle */namespace /*VWK6PgVA-y+RHsq>xn */std;int /**yzY=z>*(:&?Ur="zClT{NLbpDwh]7Vz%WlS]S;&*+@\[v=! */N; /*)]_6m9o'(WJ4'f"dB# */struct /*T.$# */node /*fZHS:u(YROwTFzhz|ob */{int /*` */begin,end; /* */}m[5005];bool /**/P-q1Mcg^(kAqSU */cmp /*t1GG"iWGk9%7>[xeb */(node /*)p-;. */a,node /*h/G/yyR{x%Sl|<7@J)m7}qzyqQ_0: */b /*k7kd5j{`Lja5t4 */) /*7U'2$4"] */{return /*HP/Y<lfnr8U */a.begin<b.begin; /*&y */}int /*l= */main /*R$2 */( /*Rr\s */) /*$rtlS#&b:cEQw{N%u%1n`q */{scanf /*W]z2F)|sjar7Tz5S|B3b& */("%d",&N);for /*(Ls$QEJnwvsZX-h*]l"8#W */(register /*Qq!)]B{pF%X */int /*serc<s/U{ */i=1;i<=N;++i /*O>J */)scanf /*I */("%d%d",&m[i].begin,&m[i].end);sort /*w */(m+1,m+1+N,cmp /*cy`@xA%i2KfpXf|O=shiwIFrZYZ8S[\XXx\STY*i */);int /*:%':Gq^uULBNZcsp( */begin=m[1].begin;int /*X[vp6p(t+up\| */end=m[1].end;int /*{4sS)N}vs=)\%nGI */ans1=0,ans2=0;for /*wVHezAx'!>j(-8!Q1D */(register /*DO5rzJ_|,Ym$GK */int /* */i=2;i<=N;++i /*a@?x"SV\xR}*pZ|r{MII */) /*EK=RUovw7V,"VnkW>FDn7gV1KhO2Ie6oY$gF/gu */{if /*]fvThLw"M!|;sqU-<K5DM */(m[i].begin<=end /*3"jx<_-xf7}E<o+`UMyS%V */)end=max /*8p$/UB\[D0:M| */(end,m[i].end /*V^JLoTv_>NBKfrxm?T(6Z" */);else /*!M.(- */{ans1=max /*`K5`1=?r8EM@=1=lNa?+[ez[Uo^vJAL@$N,T["1m' */(ans1,end-begin /*r5ou|CqUvTJ$!nklqo,hiK */);ans2=max /*&n1 */(ans2,m[i].begin-end /*CYJvrV7Gpe */);begin=m[i].begin;end=m[i].end; /*UEh_E0^ */} /*vKH5e4='@'G)(WyxVs*#-0O+[z */}ans1=max /* */(ans1,end-begin /*'%K */);printf /*Q=" */("%d %d",ans1,ans2); /*_0;l&I*Hr/j.pi+tnS */return /*5:"M3*"q) */0; /*sr0xqn */}
```
3.0注入后
```cpp

#include<bits/stdc++.h>
using /*Qs */namespace /*"ans="Z"dp[1][n]=max(dp[1][n],dp[2][n])"= */std;int /*Vsk"#ifdef"XQH^"ans="oW["dp[1][n]=max(dp[1][n],dp[2][n])"9&""a\["int">_"dfs(1)"J!" "|k */N; /*;8 */struct /* */node /*8)"int dp[1500+50][1500+50]"8{ */{int /*Hr */begin,end; /*:}.TD,#kq"priority_queue<int>a")on"bool b[100000]"iR" "+N!W6Kf
O5 */}m[5005];bool /*\[\q%Y" "BbctfWW"priority_queue<int>a"AQ"check()".;nPc" "#6[Hu: */cmp /*"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"c!j"priority_queue<int>a"aH */(node /* */a,node /*"int a[10000]"_q"D<|1HM\ */b /*2oT"dfs(123)"W"while(1)"_2 */) /*6}"string ss"YXf`m6L"bool"+"int"&6?YQO"ans="}=(" "r&-NW6'&"char"bNRh""\"dfs(123)"Zj */{return /*u'F"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"H)&"#ifdef"7"priority_queue<int>a"5R(V"string ss"r$f"ans="?s'w
Cl" "HR"int a[10000]"\8 */a.begin<b.begin; /*e"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"v_O"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"KOYJ-"bool b[100000]"c"">-i3 */}int /*Gu<)"#define int long long". */main /*Waw"while(1)"`" "V,h */( /*;_`"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"o */) /*U`0 */{scanf /*@ */("%d",&N);for /*871oa4W3"dp[1][n]=max(dp[1][n],dp[2][n])"eJ.\>wNO */(register /*U"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"-h */int /*UGg */i=1;i<=N;++i /*("while(head<=tail&&qq[tail]>=a[i])"^"int dp[1500+50][1500+50]"g"int"f"vector<int,greater<int>,less<int> >b"va+B"#define int long long"X}n */)scanf /*""pF!OHJQGQ"vector<int,greater<int>,less<int> >b"W!g$YL
2"bool a,b,c"}- */("%d%d",&m[i].begin,&m[i].end);sort /*"dfs(1)":P--O}Trlk]"bool"ovJ?jcNwMgj"while(1)"$@>PdLmO;0 */(m+1,m+1+N,cmp /*?j'ksui"int"68y`H)"while(head<=tail&&qq[tail]>=a[i])"Z2 */);int /*"bool a,b,c","#define int long long">xM{ */begin=m[1].begin;int /*"int a[10000]"t[_" "t]9=)-$= */end=m[1].end;int /*h */ans1=0,ans2=0;for /* */(register /*"while(1)"]R`Rn<m */int /*|4""#"dfs(1)"?"string";:Uk5&d"char"x:Sd"int l,r,mid"97Q */i=2;i<=N;++i /*"#ifdef";"ans="x+"char"KblH=[<WZ"int dp[1500+50][1500+50]"O:8ty */) /*Q"priority_queue<int>a"|t"bool b[100000]"3g"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"w"bool b[100000]"_: */{if /*2I'uEPnX"while(head<=tail&&qq[tail]>=a[i])"Z */(m[i].begin<=end /*|h+9"v'"bool b[100000]"9"check()"&A */)end=max /*hX */(end,m[i].end /*" "GyQ8l#!\tI`tQ" "lE""bool b[100000]"Sm]U!lK"while(head<=tail&&qq[tail]>=a[i])"Cv7"int"+"ans="1l]{K"bool"af""("dfs(123)")5sViOKJ */);else /*U8"#ifdef"M""z1C */{ans1=max /* */(ans1,end-begin /*5IP */);ans2=max /*Ap4WU"int"J6Jn0"check()"y`."#define int long long"8fEonh:H9J:AiPy|e"stack<string>a"_ */(ans2,m[i].begin-end /*h"int a[10000]"?M */);begin=m[i].begin;end=m[i].end; /*[]"string"= */} /*K; */}ans1=max /*N7"#define int long long"8@N,nS8Pm"priority_queue<int>a"=x`e */(ans1,end-begin /*v"bool"a{-?
"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"Eq8MD */);printf /*?<[i */("%d %d",ans1,ans2); /* */return /*h:cB[op`Hp"priority_queue<int>a"BB9l"while(head<=tail&&qq[tail]>=a[i])"I'p9L:qvlnPJ$jwj"#define int long long"+#"dfs(123)"p"char"M2tP3"string ss"rU("bool a,b,c"Jh$t9X"int l,r,mid"3V3:"while(head<=tail&&qq[tail]>=a[i])"3_czd */0; /*." "gBHY)"dp[1][n]=max(dp[1][n],dp[2][n])"s */}
```
4.0注入后

```cpp
#define _ooOoO bool
#define _OOo0O true
#define _O0000 false
#define _O0oOO char
#define _OooOO int
#define _00o000 double
#define _000OO0 long
#define _OoO000 signed
#define _Oo00OoOO switch
#define _O00oo0Oo case
#define _0O000O default
#define _0OO0 do
#define _O00OOo for
#define _0ooo0oO while
#define _Oooo00O if
#define _ooOo0 else
#define _0OoOO0 break
#define _Oo0ooOO continue
#define _ooOo const
#define _O0oOo0O extern
#define _o0o0Ooo export
#define _0o0o0o public
#define _OO0o00oO protected
#define _oo0o0 private
#define _OOO00 static
#define _Ooo0oO00 struct
#define _OoO00o class
#define _oOo0oO template
#define _000OoOO mutable
#define _00OoOOO virtual
#define _oOoo try
#define _O0OoO0O friend
#define _O0oO00 operator
#define _0oOoOo register
#define _o00oOo using
#define _0oOoO namespace
#define _oOo void
#define _o00o0 return
#define _0ooO0o sizeof
#define _ooOoo this
#define _OO0oO00 cin
#define _0OoOO00 cout
#include<bits/stdc++.h>
_o00oOo /*V"bool"j"dp[1][n]=max(dp[1][n],dp[2][n])"QDy,jpfn */_0oOoO /*l=="while(head<=tail&&qq[tail]>=a[i])";!n"while(head<=tail&&qq[tail]>=a[i])"7u */std;_OooOO /*"char"rIp0
u0"int a[10000]"" */N; /*"string ss"lf"string"U"ig"bool b[100000]"GG"priority_queue<int>a"J!"bool"`%="dfs(1)"C"char"1"int"Di"while(1)"^q" "bkL;HWQ<A7{; */_Ooo0oO00 /*oNJ\J?"bool a,b,c"'2"int l,r,mid"%w{D< */node /*Wp */{_OooOO /* */begin,end; /*"bool"fy */}m[5005];_ooOoO /*W2"while(head<=tail&&qq[tail]>=a[i])"HU"bool"D@V"bool b[100000]"R?s]8"while(head<=tail&&qq[tail]>=a[i])"Pjw"char"@K"string"J
g */cmp /*_S */(node /*+<s"int"_N$Dz!`Tnq9"int a[10000]"^"check()"I"bool a,b,c"htO]rL:Bew>"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"[pdHy */a,node /*#>HO?J%"Sn""while(head<=tail&&qq[tail]>=a[i])"k"#ifdef"AB"dp[1][n]=max(dp[1][n],dp[2][n])"(Z"#define int long long"Z0KG(9o\5"int dp[1500+50][1500+50]""-"bool a,b,c"%b7{" "Vsg"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"b-x"int dp[1500+50][1500+50]"Qm=v|[KaI>"string ss"8 */b /*d */) /*"vector<int,greater<int>,less<int> >b")"0EGRom'ud */{_o00o0 /*h) */a.begin<b.begin; /*HR */}_OooOO /*"stack<string>a"$q"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"0 */main /*q" "jdPH^ZT4 */( /*7"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"h}KS"string ss"uv.X{^a9=r"int a[10000]"R@O"vector<int,greater<int>,less<int> >b"#><X,"bool"2q>w */) /*Ojo"#ifdef"6X"int l,r,mid"v */{scanf /*"char"eh!BR
2m#!(1'=j"ans="QTa */("%d",&N);_O00OOo /*]N9l_e.{PDR"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"7g"int"["#ifdef"l!dQ */(_0oOoOo /*"string ss"za"int"!"int"yl */_OooOO /*}2ieONwU"stack<string>a"u\n,"check()"D"int dp[1500+50][1500+50]"n"int a[10000]"A<wY=sse<TO"string ss"D */i=1;i<=N;++i /*;z */)scanf /*" "#ch1\%]PuRyi7"dfs(123)",J"UNx"dfs(1)"b-(ht */("%d%d",&m[i].begin,&m[i].end);sort /*"ans="Far */(m+1,m+1+N,cmp /*G"4T"bool"8"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"B"Q"int a[10000]"A
a */);_OooOO /*"dfs(1)"v"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"b#T^"while(head<=tail&&qq[tail]>=a[i])"q"dfs(123)"H"$i */begin=m[1].begin;_OooOO /* */end=m[1].end;_OooOO /*|5fAQ"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"J"dp[1][n]=max(dp[1][n],dp[2][n])"t4"#define int long long"w */ans1=0,ans2=0;_O00OOo /*1y4LeB7i{^-'"dp[1][n]=max(dp[1][n],dp[2][n])"`HPA>e */(_0oOoOo /*Cv1z|dVY"string"J@ */_OooOO /*Hf"#define int long long"!d"string"L\
"while(head<=tail&&qq[tail]>=a[i])"%HL8PC$"check()"v_)M"string")="" "5"dfs(123)"&ZLx"bool"8Bh`-q"#ifdef"Q */i=2;i<=N;++i /*" "wR8"dfs(1)"r3i"int dp[1500+50][1500+50]"+jBxHNcM#"int dp[1500+50][1500+50]"W */) /*+m8B"string ss"mS+"vector<int,greater<int>,less<int> >b")"bool"vqR"#define int long long"MPpR" ","stack<string>a")"priority_queue<int>a"q)yJs"bool b[100000]"yY`VOBlxwT9F4 */{_Oooo00O /*-"dfs(123)"YQC"#ifdef"-e"ans="Dp, */(m[i].begin<=end /*!6Qy4"dfs(123)"6oMu */)end=max /*Y"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"<'I */(end,m[i].end /*"ans="]uW=V"#define int long long"s}H4"v;C7 */);_ooOo0 /*VxP"string ss"9)@7'.1J.s;6 */{ans1=max /*@r\#$:\"int"I!c1[@"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"5)e%}nl&9Ct-hJsJpS"bool b[100000]"E="int dp[1500+50][1500+50]"%oSq
zj"for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)"Xg33 */(ans1,end-begin /*$z */);ans2=max /*'"int dp[1500+50][1500+50]"OmfJ */(ans2,m[i].begin-end /*|i" "7P */);begin=m[i].begin;end=m[i].end; /*|"stack<string>a"n:4zf:!"#ifdef":"while(head<=tail&&qq[tail]>=a[i])"s2`=p */} /*eAt"while(1)"Xx */}ans1=max /*z */(ans1,end-begin /*\?QE"dfs(123)"){%b */);printf /*GTeG"vector<int,greater<int>,less<int> >b"c'"vector<int,greater<int>,less<int> >b"T'$; */("%d %d",ans1,ans2); /*Rdk"addedge(a,b,w)addedge(a,b,w),addedge(b,a,w)"XW?&g"while(head<=tail&&qq[tail]>=a[i])"L" "m;" "i6" "? */_o00o0 /*>"while(1)"M4ZOwBh */0; /*^7"string"36
^zTkK\ */}
```
