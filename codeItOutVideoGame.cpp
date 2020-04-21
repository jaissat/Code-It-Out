#define lli long long int
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
inline lli read ()
{
	char c;
	lli n = 0;
	while ((c = getchar_unlocked ()) < 48);
    n += (c - '0');
	while ((c = getchar_unlocked ()) >= 48)
		n = n * 10 + (c - '0');
	return n;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli n=read(),h=read();
   
    lli ar[n]={0};
    
    for(lli i=0;i<n;i++)
      ar[i]=read();
     
    lli p=0,q=0;
    
    while(1)
    {
       lli c=read();
       
       if(c==1)
       	if(p!=0)
       		p--;
       
       if(c==2)
           if(p!=n-1)
              p++;
              
       if(c==3)
       {    if(q==0 && ar[p])
           { q=1; ar[p]--;}}
       
       if(c==4)
       {     if(q && ar[p]<h)
            { q=0; ar[p]++;}}
            
       if(c==0) 
        break;     
     
    }
    
    
    for(lli i=0;i<n;i++)
      printf("%d ",ar[i]);
    
    
	return 0;
}
    
