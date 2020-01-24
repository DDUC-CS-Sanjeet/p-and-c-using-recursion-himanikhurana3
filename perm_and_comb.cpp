#include<iostream>
#include<stdlib.h>
using namespace std;

int permutation(int n, int r)
{
	
  if(r>1)
  {   return n*permutation(n-1,r-1);
  	
  }
  else if(r==1)
  { 
    return n;
 }
 else if(r==0)
 {
 	return 1;
 }
}



int combination(int n, int r)
{
		if(r==0)
	{
		return 1;
	}
	else
	{
		return (n*combination(n-1,r-1))/r;
  	
	}
}

int main()
{
	int n, r;
	int ch=0;
	char ans='n';
	do{
	
	cout<<"\n Enter the value of n\n\t";
	cin>>n;
	cout<<"\n Enter the value of r\n\t";
	cin>>r;
	try
	{
		if(n<=0||r<0||n<r)
		throw "INVALID";
		
	}
	catch (const char *str)
	{
		cout<<str;
		exit(0);
	}
	cout<<"\n\t\tCHOOSE";
	cout<<"\n 1. PERMUTATION";
	cout<<"\n 2. COMBINATION";
	cout<<"\n";
	cin>>ch;
	switch(ch)
	{
	case 1: {
             int perm=   permutation(n,r);
               cout<<"\n PERMUTATION:  "<<perm;break;
           }
    case 2: {
			int comb= combination(n,r);
       cout<<"\n COMBINATION:   "<<comb;break;
            }
    default:{
	 cout<<"\n invalid choice "; break;
    }
	}
	cout<<"\n Do you wish to continue?(y/n)\n";
	cin>>ans;
} while(ans=='y'||ans=='Y');
    
	return 0;
}
