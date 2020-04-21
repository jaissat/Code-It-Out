#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
inline lli read ()
{
	char c;
	lli n = 0;
	while ((c = getchar_unlocked ()) < 48);
    n += (c - '0');
	while ((c = getchar_unlocked ()) >= 48)
		n = n * 10 + (c - '0');
	return n;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli m=read();
    bool flag=1;
    stack<int> s;
    lli depth=0,pd=0,length=0,pl=0,pll=0;
    for(lli i=1;i<=m;i++)
    {
    	lli p=read();
    	if(p==1)
    	{s.push(1);
    	 if(s.size()>depth)
    	 {
    	 	depth=s.size();
    	     pd=i;
    	 }
    	 if(s.size()==1 && flag)
    	 { pl=i-s.size()+1; flag=0;}
    	}
    	else
    	{s.pop();
    	 if(s.empty())
    	 {  if(i-pl+1>length)
    	 	{length=i-pl+1;
    	 	 pll=pl;
    	 	}
    	 	flag=1;
    	 }
    	}
    }
    
    printf("%lld %lld %lld %lld",depth,pd,length,pll);
	return 0;
}
    
    