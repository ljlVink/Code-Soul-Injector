# Code-Soul-Injector3.0已经成功发布
# 补锅了，
# 经测试，V3的代码量非常非常大的时候还会有问题
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
