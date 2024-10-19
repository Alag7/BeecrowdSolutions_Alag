#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	
	int n, v, pos=-1, min = INT_MAX; cin>>n;
	for(int i=1; i<=n; i++){
		cin>>v;
		if(v < min){
			pos = i;
			min = v;
		}
	}
	cout<<pos<<'\n';
	
	
	return 0;
}
