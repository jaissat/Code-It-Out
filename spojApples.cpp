#define lli long long int
#define TC long long int T;cin>>T;while(T--)
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TC
    {
    	lli n,k;cin>>n>>k;
    	lli wt[k+1]={0},val[k+1]={0};
    	
    	for(lli i=1;i<=k;i++)
    	{cin>>val[i];wt[i]=i;}
    	
    	/*for(lli i=0;i<k;i++)
    	{cout<<wt[i]<<" ";}
    	cout<<endl;
    	for(lli i=0;i<k;i++)
    	{cout<<val[i]<<" ";}
    	cout<<endl;*/
    	
    	lli m[k+1][k+1]={0};
    
    	for(lli i=0;i<=k;i++)
    	 m[0][i]=1000000;
        for(lli i=0;i<=k;i++)
    	 m[i][0]=1000000;
    	 
    	for(lli i=1;i<=k;i++)
    	{
    		for(lli j=1;j<=k;j++)
    		{
    			if(val[i]==-1 || j<i)
    			{ m[i][j]=m[i-1][j];}
    			
    			else if(j==i)
    			{m[i][j]=min(m[i-1][j],val[i]);}
    			
    			else
    			{   m[i][j]=LONG_MAX;
    				for(lli p=1,q=j-1;p<=j;p++,q--)
    				{m[i][j]=min(m[i][j],(m[i][p]+m[i][q]));}
    			}
    		
    		}
    	}
    	
    	/*for(lli i=0;i<=k;i++)
    	{ for(lli j=0;j<=k;j++)
    	   { cout<<m[i][j]<<" ";}
    	   cout<<endl;
    	}
    	*/
    	if(m[k][k]>=1000000)
    	cout<<"-1\n";
    	else
    	cout<<m[k][k]<<endl;
    }
	return 0;
}
    
    
