#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli n,b,aa,a;cin>>n>>b>>aa;
    lli s;
    a=aa;
    lli i;bool flag=0;
    for(i=1;i<=n;i++)
    {
    	cin>>s;
    	
    	if(s)
    	{
    		if(a==aa)
    		{a--;}
    	   else if(b)
    		{ b--;
    		  a++;	  
    		 }
    		else if(a)
    		{a--;}
    		else
    		 flag=1;
    		
    		//cout<<b<<" "<<a<<endl;
    	}
    	else
    	{
    		if(a)
    		{a--;}
    		else if(b)
    		{b--;}
    		else
    		 flag=1;
    		 //cout<<b<<" "<<a<<endl;
    	}
    	
    	if(flag)
    	{
    		cout<<i-1;
    		while(i<=n)
    		{i++;cin>>s;}
    		break;
    	}
    	else if(i==n)
    	  cout<<i;
    }
	return 0;
}
    
//100 5 5
//1 1 0 0 0 0 1 1 1 0 1 1 0 0 .0 1 0 0 0 1 0 0 1 0 1 1 0 0 0 0 1 0 0 0 1 1 0 1 1 1 1 0 0 0 0 0 1 0 1 1 1 1 0 1 1 0 0 1 0 1 1 1 0 0 1 1 0 0 1 0 0 1 1 1 0 0 1 0 1 1 1 0 1 0 0 1 0 1 0 1 0 1 0 1 1 0 1 1 1 1
