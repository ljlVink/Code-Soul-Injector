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

```
![](https://ipcounter.ihcr.top/)
