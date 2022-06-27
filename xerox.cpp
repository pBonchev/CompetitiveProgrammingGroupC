#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	ll n,b;
	cin>>n>>b;
	
	ll x;
	ll t=0,ans=0;
	ll mi=0;
	
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&x);
		t+=x;
		ans+=t;
		t=max(mi,t-b);
	}
	
	ans+=t;
	
	cout<<ans<<endl;
}
