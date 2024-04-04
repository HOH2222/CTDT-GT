#include <iostream>
#include <string.h>
using namespace std;
void swap(int& a,int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void sapxep(int* a,int n)
{   
	int i,j,t;
	i = n - 1;
	j = n - 2;
	t = 0;
	while (t != n - 1)
	{   
		while(a[i]>= a[j]&&j >= 0)
		{
			i = i - 1;
			j = j - 1;
			t = t + 1;
		}
		if(a[i] < a[j] && j > -1) 
		{ 
		swap(a[i],a[j]);
	    t = t - 1;
		continue;
		}
		if(t == n - 1) 
		break;
		i = n - 1;
		j = n - 2;
		t = 0;
	}
	
}

int main()
{   int n = 0;
    string s;
	cout<<"Nhap cac phan tu cua mang: "<<endl;
	getline(cin,s);
	for(int i = 0;i<s.size();i++)
	{   
	 if (s[i]==',') 
		     n = n + 1;
	}
	n = n + 1;
	int a[n];
	int i = 0;
	if (s[0]=='r') a[i] = 0;
	if (s[0]=='w') a[i] = 1;
	if (s[0]=='b') a[i] = 2;
    for(int h = 0; h < s.size();h++)
    {   
	    if (s[h] ==',')
        {	
		    i = i + 1;
	    	if (s[h + 1]=='r') a[i] = 0;
	    	if (s[h + 1]=='w') a[i] = 1;
	    	if (s[h + 1]=='b') a[i] = 2;
	    
		}
	}
	sapxep(a,n);
	for(int i = 0;i<n;i++)
	{
		if(a[i] == 0) cout<<"red"<<" ";
		if(a[i] == 1) cout<<"while"<<" ";
		if(a[i] == 2) cout<<"blue"<<" ";

	} 
}
