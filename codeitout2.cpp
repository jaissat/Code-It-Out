#include<iostream>
#define llint long long int
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std; 
 
llint Inverse(llint x, unsigned llint y, unsigned llint m) 
{ 
    if (y == 0) 
        return 1; 

    llint p = Inverse(x, y/2, m) % m; 

    p = (p * p) % m; 

    return (y%2 == 0)? p : (x * p) % m; 
} 

int main()
{ 
	llint t;cin>>t;
	
	while(t--)
 { 
    llint pro1=1,pro2=1;
    llint m,n;cin>>m>>n;
    
    for(llint i=max(m,n)+1;i<=(m+n);i++)
    pro1=(pro1*(i%mod))%mod;
    
    for(llint i=2;i<=min(m,n);i++)
    pro2=(pro2*(i%mod))%mod;
    
    pro2=Inverse(pro2,mod-2,mod);
    
    cout<<(pro1*pro2)%mod<<endl;
  }
  
  return 0;
}
    
    
