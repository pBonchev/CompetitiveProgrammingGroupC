#include <iostream>

using namespace std;

int a[1000000];

int main()
{
	int n;
	scanf("%d",&n);
	
	int x,y,t=1;
	scanf("%d",&x);
	
	for(int i=1;i<n;i++)
	{
		scanf("%d",&y);
		
		if(x==y) t++;
		else t--;
		
		if(t==0)
		{
			t=1;
			x=y;
		}
	}
	
	cout<<x<<endl;
}
