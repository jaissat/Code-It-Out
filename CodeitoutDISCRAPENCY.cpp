#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	lli a,b,c;cin>>a>>b>>c;
	a=a+b+c;
	
	set<lli> in,out;
	
	while(a--)
	{
		lli p;cin>>p;
		if(in.find(p)==in.end())
		 in.insert(p);
		 
		else
		 out.insert(p);
	}
	
	cout<<out.size()<<endl;
	
	for( lli i:out)
	 cout<<i<<endl;
	return 0;
}
    
