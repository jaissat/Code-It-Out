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
	   	
	    else if(ar[i]>ar[j])
	   	{
	   	 if(k<ar[j])
	   	 {s=s+"R";k=ar[j];j--;}
	   	 else if(k<ar[i])
	   	 {s=s+"L";k=ar[i];i++;}
	   	 else
	   	 break;
	   	}
	    else if(i==j)
	      { if(k<ar[i])
	        { if(s.length()>0)
	        	s=s+s[s.length()-1];
	          else
	            s=s+"R";
	        }
	         break;
	      }
	    else
	      {     
	        lli y=i,z=j,kk=k;
	        string yy="";string zz="";
	        while(y<j)
	        {
	        	if(ar[y]>kk)
	        	{kk=ar[y];y++;yy=yy+"L";}
	        	else
	        	break;
	        }
	        kk=k;
	        while(z>i)
	        {
	        	if(ar[z]>kk)
	        	{kk=ar[z];z=z-1;zz=zz+"R";}
	        	
	        	else
	        	break;
	        }
	       
	       if(yy.length()>zz.length())
	       s=s+yy;
	       else
	       s=s+zz;
	       
	       break;
	     }
	      
	      
	   } 
	 
	 cout<<s.length()<<"\n"<<s<<endl;
	 
	return 0;
}
