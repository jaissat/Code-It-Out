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
    	
    	lli n,k;cin>>n;
    	lli maxe=LLONG_MIN;lli sump=0,gsum=-100000000,csum=-100000000;
    	vector<lli> v;
    	for(lli i=0;i<n;i++)
    	{
    		cin>>k;
    		if(k>maxe) maxe=k;
    		if(k>0) sump=sump+k;
    		v.push_back(k);
    		
    	}
    	
   
        if(!sump)
        {cout<<maxe<<" "<<maxe<<endl;continue;}
    	
    	for(lli i=0;i<n;i++)
    	{
    		csum=max((csum+v[i]),v[i]);
    		gsum=max(gsum,csum);
    	}
    	
    	cout<<gsum<<" "<<sump<<endl;
    	
    }
    
	return 0;
}
    
