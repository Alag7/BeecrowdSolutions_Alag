#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int l, v;
	while(cin>>l){
		int faster = 0;
		for(int i=0; i<l; i++){
			cin>>v;
			faster = max(faster, v);
		}
		if(faster < 10){
			cout<<1<<'\n';
		}
		else if(faster < 20){
			cout<<2<<'\n';
		}
		else{
			cout<<3<<'\n';
		}
	}
	return 0;
}
