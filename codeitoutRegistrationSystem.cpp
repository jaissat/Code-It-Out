#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string,lli> m;
    
    lli t;cin>>t;
    cin>>ws;
    string s;
    while(t--)
    {
    	getline(cin,s);
        if(m.find(s)!=m.end())
        {m[s]=m[s]+1;cout<<s;cout<<m[s]<<endl;}
    	else
    	{m.insert({s,0});cout<<("OK\n");}
    	
    }
	return 0;
}
    
