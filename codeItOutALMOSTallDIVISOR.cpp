#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli t;cin>>t;
    while(t--)
    {
    	lli m;cin>>m;
    	lli max=0;
    	lli min=INT_MAX;
    	lli ar[m];
    	for(lli i=0;i<m;i++)
    	{
    		cin>>ar[i];
    		
    		if(ar[i]>max)
    		 max=ar[i];
    		 
    		if(ar[i]<min)
    		 min=ar[i];
    	}
    	
    	sort(ar,ar+m);
    	
    	max=max*min;
    	vector<lli> v;
    	
    	for(lli i=2;i*i<=max;i++)
    	{
    	  if(max%i==0)
    	  { if(max/i!=i)
    		{v.push_back(i);v.push_back(max/i);}
    		else
    		{v.push_back(i);}
    	  }
    	}
    	
    	sort(v.begin(),v.end());
    	
    	
    	bool flag=1;
    	
    	if(v.size()==m)
    	{  
    		for(lli i=0;i<m;i++)
    		{
    			if(v[i]!=ar[i])
    			{flag=0;break;}
    		}
    	}
    	
    	else
    	 flag=0;
    
    
    
    	if(flag)
    	cout<<max<<endl;
    	else
    	cout<<"-1\n";
    }
	return 0;
}
    
