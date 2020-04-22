#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli l;lli s;
    cin>>l>>s;
    if(s>(l*9) || (s==0 && l>1))
    printf("-1 -1\n");
    else
    {
    	lli max[l]={0};
    	lli min[l]={0};
    	
    	lli p=l-1;
    	
    	lli k=s;
    	
    	while(k>9)
    	{  max[p]=9;min[p]=9;
    	   p--;k=k-9;
    	}
    	
    	if(p>0)
    	{
    		max[p]=k-1;
    		min[p]=k;
    		 k--; p--;
    		while(p>0)
    		{ 
    			max[p]=0;
    			min[p]=0;
    			p--;
    		}
    		max[p]=1;
    		
    	
    	}
    	else
    	{
    	  max[p]=k;
    	  min[p]=k;
    	}
    	
    	
    	
    	for(lli i=0;i<l;i++)
    	 printf("%lld",max[i]);
    	printf(" ");
    	for(lli i=l-1;i>=0;i--)
    	 printf("%lld",min[i]);
    }
   
	return 0;
}
    
