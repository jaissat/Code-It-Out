#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{  
	lli n,k,mid;cin>>n>>k;
	
	if(n%2==0)
	 mid=n/2;
	else
	 mid=(n/2)+1;
	 
	if(k<=mid)
	cout<<2*k-1;
	else
	cout<<2*(k-mid);
	
	return 0;
}
    
