# Code-Soul-Injector
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
![](https://ipcounter.ihcr.top/)
