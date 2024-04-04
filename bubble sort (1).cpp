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
{   int n;
    char s[10];
    cout<<"Nhap so phan tu cua mang: "<<endl;
    cin>>n;
    int a[n];
	cout<<"Nhap cac phan tu cua mang: "<<endl;
	cin.ignore();
	for(int i = 0;i<n;i++)
	{   		
	    if (i == n - 1) 	cin.getline(s,10);
	    else
		cin.getline(s,10,',');
		if(strcmp(s, "red") == 0) a[i] = 0;
		if(strcmp(s, "while") == 0) a[i] = 1;
		if(strcmp(s, "blue") == 0) a[i] = 2;	

	}
	sapxep(a,n);
	for(int i = 0;i<n;i++)
	{
		if(a[i] == 0) cout<<"red"<<" ";
		if(a[i] == 1) cout<<"while"<<" ";
		if(a[i] == 2) cout<<"blue"<<" ";

	} 
}
