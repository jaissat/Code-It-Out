#define lli long long int
#define TC long long int T;cin>>T;while(T--)
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

lli wt[102],val[102];
lli mat[102][100005]={0};
lli n,W;
lli rec(lli n,lli w)
{
	if(n==-1) return 0;
	
	if(mat[n][w])
	 return mat[n][w];
	 
	if(wt[n]<=w)
	{
	   return mat[n][w]=max(val[n]+rec(n-1,w-wt[n]),rec(n-1,w));
	}
	else
	   return mat[n][w]=rec(n-1,w);
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>W;
    for(lli i=0;i<n;i++)
    {
    	cin>>wt[i]>>val[i];
    }
    
    cout<<rec(n-1,W);
    
	return 0;
}
    
