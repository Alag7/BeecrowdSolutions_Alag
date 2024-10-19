#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, p, q;
	long double total = 0;
	cin>>n;
	while(n--){
		cin>>p>>q;
		p = p%10;
		total += q*p + q*(0.5);
	}
	cout<<fixed<<setprecision(2)<<total<<'\n';
	
	return 0;
}
