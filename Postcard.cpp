#define lli long long int
#define TC long long int T;cin>>T;while(T--)
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,p="";cin>>s;
    lli L;cin>>L;
    lli l=s.length();
    lli q=0,as=0;
    
    for(lli i=0;i<l;i++)
    {
    	if(s[i]=='?') q++;
    	if(s[i]=='*') as++;
    }
    
    
    if(L==(l-q-as))
    {
    	for(lli i=0;i<l;i++)
    	{
    		if(s[i]!='*' && s[i]!='?')
    		cout<<s[i];
    	}
    }
    if(L>(l-q-as))
    {
    	lli d=L-l+q+as;
    	
    	if(as)
    	{
    		for(lli i=0;i<l;i++)
    		{
    			if(s[i]!='*' && s[i]!='?')
    			cout<<s[i];
    			
    			if(s[i]=='*' && d)
    			{
    				for(lli j=1;j<=d;j++)
    				cout<<s[i-1];
    				d=0;
    			}
    		}
    	}
    	
    	else
    	{
    		cout<<"Impossible";
    	}
    }
    if(L<(l-q-as))
    {
    	lli d=(l-q-as)-L;
    	
      if(d<=(q+as))
      {
    		for(lli i=l-1;i>=0;i--)
    		{
    			if((s[i]=='*' || s[i]=='?') && d)
    			{i--;d--;}
    			else if(s[i]!='*' && s[i]!='?')
    			p=s[i]+p;
    		}
    	  cout<<p;
      }
      else
      cout<<"Impossible";
    }
    
	return 0;
}
    
    