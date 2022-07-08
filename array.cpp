#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n,a[20][30];
	cout<<"enter row & column size of matrix"<<endl;
	cin>>m>>n;
	cout<<endl;
	cout<<"enter element of array";
{
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	 cin>>a[i][j];
}
}
	{
	cout <<"matrix elements are:\n";
	{ 
	for (i=0; i<m;i++)
	{for (j=0;j<n;j++)
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
	}
}
	
	return 0;
	
}
