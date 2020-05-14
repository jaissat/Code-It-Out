#define lli long long int
#define TC long long int T;cin>>T;while(T--)
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
lli n;
lli ar[100000][3];
lli mat[100000][4]={0};
lli rec(lli a,lli x)
{
	if(a==-1)
	return 0;
	
	if(mat[a][x])
	return mat[a][x];

	vector<lli> dp;
	for(lli i=0;i<3;i++)
	{ 
	  if(i!=x)
	   dp.push_back(ar[a][i]+rec(a-1,i));  	
	 }
	 
	return mat[a][x]=max({dp[0],dp[1],dp[2]});
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    
    for(lli i=0;i<n;i++)
      for(lli j=0;j<3;j++)
        cin>>ar[i][j];
   
   
    cout<<rec(n-1,3);
    
	return 0;
}
    
    