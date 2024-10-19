#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, l;
	cin>>n;
	vector<int>mult(4, 0);
	while(n--){
		cin>>l;
		for(int i=2; i<=5; i++){
			if(!(l%i)){
				mult[i-2]++;
			}
		}
	}
	for(int i=0; i<4; i++){
		cout<<mult[i]<<" Multiplo(s) de "<<(i+2)<<'\n';
	}
	return 0;
}
