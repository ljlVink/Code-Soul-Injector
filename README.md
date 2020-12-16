# Code-Soul-Injector3.0已经成功发布
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
``` cpp
#include<bits/stdc++.h>
using /*aV#XJZ:Z<U[nLQWg+dP801fle */namespace /*VWK6PgVA-y+RHsq>xn */std;int /**yzY=z>*(:&?Ur="zClT{NLbpDwh]7Vz%WlS]S;&*+@\[v=! */N; /*)]_6m9o'(WJ4'f"dB# */struct /*T.$# */node /*fZHS:u(YROwTFzhz|ob */{int /*` */begin,end; /* */}m[5005];bool /**/P-q1Mcg^(kAqSU */cmp /*t1GG"iWGk9%7>[xeb */(node /*)p-;. */a,node /*h/G/yyR{x%Sl|<7@J)m7}qzyqQ_0: */b /*k7kd5j{`Lja5t4 */) /*7U'2$4"] */{return /*HP/Y<lfnr8U */a.begin<b.begin; /*&y */}int /*l= */main /*R$2 */( /*Rr\s */) /*$rtlS#&b:cEQw{N%u%1n`q */{scanf /*W]z2F)|sjar7Tz5S|B3b& */("%d",&N);for /*(Ls$QEJnwvsZX-h*]l"8#W */(register /*Qq!)]B{pF%X */int /*serc<s/U{ */i=1;i<=N;++i /*O>J */)scanf /*I */("%d%d",&m[i].begin,&m[i].end);sort /*w */(m+1,m+1+N,cmp /*cy`@xA%i2KfpXf|O=shiwIFrZYZ8S[\XXx\STY*i */);int /*:%':Gq^uULBNZcsp( */begin=m[1].begin;int /*X[vp6p(t+up\| */end=m[1].end;int /*{4sS)N}vs=)\%nGI */ans1=0,ans2=0;for /*wVHezAx'!>j(-8!Q1D */(register /*DO5rzJ_|,Ym$GK */int /* */i=2;i<=N;++i /*a@?x"SV\xR}*pZ|r{MII */) /*EK=RUovw7V,"VnkW>FDn7gV1KhO2Ie6oY$gF/gu */{if /*]fvThLw"M!|;sqU-<K5DM */(m[i].begin<=end /*3"jx<_-xf7}E<o+`UMyS%V */)end=max /*8p$/UB\[D0:M| */(end,m[i].end /*V^JLoTv_>NBKfrxm?T(6Z" */);else /*!M.(- */{ans1=max /*`K5`1=?r8EM@=1=lNa?+[ez[Uo^vJAL@$N,T["1m' */(ans1,end-begin /*r5ou|CqUvTJ$!nklqo,hiK */);ans2=max /*&n1 */(ans2,m[i].begin-end /*CYJvrV7Gpe */);begin=m[i].begin;end=m[i].end; /*UEh_E0^ */} /*vKH5e4='@'G)(WyxVs*#-0O+[z */}ans1=max /* */(ans1,end-begin /*'%K */);printf /*Q=" */("%d %d",ans1,ans2); /*_0;l&I*Hr/j.pi+tnS */return /*5:"M3*"q) */0; /*sr0xqn */}
```

![](https://ipcounter.ihcr.top/)
