#include<iostream>
#define lli long long int
using namespace std;
#include<bits/stdc++.h>
int main()
{
	lli n;cin>>n;
	
	lli ar[n];
	
	for(lli i=0;i<n;i++)
	  cin>>ar[i];
	  
	 lli k=0;
	 string s="";
	 
	 for(lli i=0,j=n-1;i<=j;)
	   {
	   	if(ar[i]<ar[j])
	   	{
	   	if(k<ar[i])
	   	{s=s+"L";k=ar[i];i++;}
	   	else if(k<ar[j])
	   	{s=s+"R";k=ar[j];j--;}
	   	else
	   	break;
	   	}
	   	
	   	else
	   	{
	   	 if(k<ar[j])
	   	 {s=s+"R";k=ar[j];j--;}
	   	 else if(k<ar[i])
	   	 {s=s+"L";k=ar[i];i++;}
	   	 else
	   	 break;
	   	}	
	   } 
	 	
	 cout<<s.length()<<"\n"<<s<<endl;

	 
	// 1 4 6 3 2
	 
	return 0;
}